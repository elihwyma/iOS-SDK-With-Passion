/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@class MDLVertexDescriptor, MISSING_TYPE, NSMapTable, NSMutableArray, NSURL, NSUnitLength;

@protocol MDLAssetResolver, MDLMeshBufferAllocator, MDLObjectContainerComponent;

@interface MDLAsset : NSObject <Swift>

{
    NSURL *_URL;
    NSMutableArray *_objects;
    id <MDLObjectContainerComponent> _masters;
    id <MDLObjectContainerComponent> _animations;
    double _startTime;
    double _endTime;
    MISSING_TYPE *_upAxis;
    float _metersPerUnit;
    _Bool _isSceneKitBridged;
    NSMapTable *_components;
    NSURL *_temporaryFolderURL;
    double _frameInterval;
    id <MDLAssetResolver> _resolver;
    id <MDLMeshBufferAllocator> _bufferAllocator;
    MDLVertexDescriptor *_vertexDescriptor;
    double __timeCodesPerSecond;
    NSUnitLength *_unitLength;
}

@property (nonatomic, readonly) struct MDLAABB _bounds;
@property (nonatomic) double _timeCodesPerSecond;
@property (retain, nonatomic) NSURL *_temporaryFolderURL;
@property (retain, nonatomic) NSUnitLength *unitLength;
@property (nonatomic) float metersPerUnit;
@property (nonatomic, readonly) struct boundingBox;
@property (nonatomic) double frameInterval;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) MISSING_TYPE *upAxis;
@property (retain, nonatomic, readonly) NSURL *URL;
@property (retain, nonatomic) id <MDLAssetResolver> resolver;
@property (retain, nonatomic, readonly) id <MDLMeshBufferAllocator> bufferAllocator;
@property (retain, nonatomic, readonly) MDLVertexDescriptor *vertexDescriptor;
@property (nonatomic, readonly) unsigned long long count;
@property (retain, nonatomic) id <MDLObjectContainerComponent> masters;
@property (retain, nonatomic) id <MDLObjectContainerComponent> animations;

+ (_Bool)canExportFileExtension:(id)arg1;
+ (_Bool)canImportFileExtension:(id)arg1;
+ (id)placeLightProbesWithDensity:(float)arg1 heuristic:(long long)arg2 usingIrradianceDataSource:(id)arg3;
+ (void)convertToUSDZ:(id)arg1 writeToURL:(id)arg2;
+ (void)convertToUSDZWithURL:(id)arg1;
+ (_Bool)isValidUSDZResource:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)components;
- (id)initWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)objects;
- (void)_commonInit;
- (struct)boundingBoxAtTime:(double)arg1;
- (id)initWithBufferAllocator:(id)arg1;
- (void)_conformVertexBuffers:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3;
- (void)setComponent:(id)arg1 forProtocol:(id)arg2;
- (id)componentConformingToProtocol:(id)arg1;
- (void)enumerateChildObjectsOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2 stopPointer:(_Bool *)arg3;
- (id)childObjectsOfClass:(Class)arg1;
- (void)resolveTextures;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 preserveTopology:(_Bool)arg4 error:(id *)arg5;
- (id)initWithURL:(id)arg1 bufferAllocator:(id)arg2 preserveIndexing:(_Bool)arg3 error:(id *)arg4;
- (_Bool)exportAssetToURL:(id)arg1 error:(id *)arg2;
- (id)objectAtPath:(id)arg1;
- (void)loadTextures;
- (id)initThroughSCNKitBridgeWithURL:(id)arg1 preserveTopology:(_Bool)arg2 error:(id)arg3;
- (_Bool)exportAssetToURL:(id)arg1;

@end
