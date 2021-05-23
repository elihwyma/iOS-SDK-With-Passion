/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@protocol MDLMeshBuffer;

@interface MDLSubmeshTopology : NSObject

{
    id <MDLMeshBuffer> _faceTopology;
    unsigned long long _faceCount;
    id <MDLMeshBuffer> _vertexCreaseIndices;
    id <MDLMeshBuffer> _vertexCreases;
    unsigned long long _vertexCreaseCount;
    id <MDLMeshBuffer> _edgeCreaseIndices;
    id <MDLMeshBuffer> _edgeCreases;
    unsigned long long _edgeCreaseCount;
    id <MDLMeshBuffer> _holes;
    unsigned long long _holeCount;
}

@property (retain, nonatomic) id <MDLMeshBuffer> faceTopology;
@property (nonatomic) unsigned long long faceCount;
@property (retain, nonatomic) id <MDLMeshBuffer> vertexCreaseIndices;
@property (retain, nonatomic) id <MDLMeshBuffer> vertexCreases;
@property (nonatomic) unsigned long long vertexCreaseCount;
@property (retain, nonatomic) id <MDLMeshBuffer> edgeCreaseIndices;
@property (retain, nonatomic) id <MDLMeshBuffer> edgeCreases;
@property (nonatomic) unsigned long long edgeCreaseCount;
@property (retain, nonatomic) id <MDLMeshBuffer> holes;
@property (nonatomic) unsigned long long holeCount;

- (id)initWithSubmesh:(id)arg1;

@end
