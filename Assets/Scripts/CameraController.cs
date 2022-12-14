using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//let camera follow target
public class CameraController : MonoBehaviour
{
    [SerializeField] private Transform target;
    [SerializeField] private float lerpSpeed;
    
    private Vector3 offset;
    private Vector3 targetPos;
    
    private void Start()
    {
        offset = transform.position - target.position;
    }
    private void Update()
    {
        targetPos = target.position + offset;
        transform.position = Vector3.Lerp(transform.position, targetPos, lerpSpeed * Time.deltaTime);
    }
}

