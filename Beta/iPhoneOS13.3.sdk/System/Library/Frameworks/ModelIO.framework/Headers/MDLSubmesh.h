/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MDLMaterial, MDLSubmeshTopology, NSArray, NSString;

@protocol MDLMeshBuffer;

@interface MDLSubmesh : NSObject

{
    MDLMaterial *_material;
    id <MDLMeshBuffer> _indexBuffer;
    unsigned long long _indexCount;
    unsigned long long _indexType;
    long long _geometryType;
    MDLSubmeshTopology *_topology;
    NSString *_name;
    NSArray *_faceIndexing;
}

@property (retain, nonatomic) NSArray *faceIndexing;
@property (retain, nonatomic, readonly) id <MDLMeshBuffer> indexBuffer;
@property (nonatomic, readonly) unsigned long long indexCount;
@property (nonatomic, readonly) unsigned long long indexType;
@property (nonatomic, readonly) long long geometryType;
@property (retain, nonatomic) MDLMaterial *material;
@property (retain, nonatomic) MDLSubmeshTopology *topology;
@property (copy, nonatomic) NSString *name;

- (id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 geometryType:(long long)arg5 material:(id)arg6 topology:(id)arg7;
- (id)initWithIndexBuffer:(id)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 geometryType:(long long)arg4 material:(id)arg5;
- (id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 faceIndexing:(id)arg5 geometryType:(long long)arg6 material:(id)arg7 topology:(id)arg8;
- (id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 geometryType:(long long)arg5 material:(id)arg6;
- (id)initWithMDLSubmesh:(id)arg1 indexType:(unsigned long long)arg2 geometryType:(long long)arg3;
- (id)indexBufferAsIndexType:(unsigned long long)arg1;
- (void)debugPrintToFile:(struct __sFILE *)arg1;
- (struct MDLAABB)boundingBoxForMesh:(id)arg1;

@end
