/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface _UICollectionLayoutAnchor : NSObject <Swift>

{
    unsigned long long _edges;
    struct CGPoint _offset;
    struct CGPoint _anchorPoint;
    _Bool _offsetIsUnitOffset;
}

@property (nonatomic, readonly) unsigned long long edges;
@property (nonatomic, readonly) struct CGPoint offset;
@property (nonatomic, readonly) struct CGPoint anchorPoint;

+ (id)layoutAnchorWithEdges:(unsigned long long)arg1;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1 offset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1 unitOffset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 offset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 unitOffset:(struct CGPoint)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEdges:(unsigned long long)arg1 offset:(struct CGPoint)arg2 anchorPoint:(struct CGPoint)arg3 offsetIsUnitOffset:(_Bool)arg4;
- (id)_apiRepresentation;

@end
