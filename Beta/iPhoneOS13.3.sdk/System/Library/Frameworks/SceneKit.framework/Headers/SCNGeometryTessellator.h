/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface SCNGeometryTessellator : NSObject

{
    NSMutableSet *_clients;
    _Bool _adaptive;
    _Bool _screenSpace;
    float _maximumEdgeLength;
    float _edgeTessellationFactor;
    float _insideTessellationFactor;
    float _tessellationFactorScale;
    long long _smoothingMode;
    unsigned long long _partitionMode;
}

@property (nonatomic) double tessellationFactorScale;
@property (nonatomic) unsigned long long tessellationPartitionMode;
@property (nonatomic, getter=isAdaptive) _Bool adaptive;
@property (nonatomic, getter=isScreenSpace) _Bool screenSpace;
@property (nonatomic) double edgeTessellationFactor;
@property (nonatomic) double insideTessellationFactor;
@property (nonatomic) double maximumEdgeLength;
@property (nonatomic) long long smoothingMode;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addClient:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)clientWillDie:(id)arg1;
- (void)tessellatorValueDidChangeForClient:(id)arg1;
- (CDStruct_9d37c1eb)_tessellatorValueForGeometry:(id)arg1;
- (void)tessellatorValueDidChange;
- (_Bool)adaptive;
- (_Bool)screenSpace;

@end
