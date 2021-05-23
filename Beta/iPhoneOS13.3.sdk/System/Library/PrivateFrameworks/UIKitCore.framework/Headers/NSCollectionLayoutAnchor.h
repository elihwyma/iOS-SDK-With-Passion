/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface NSCollectionLayoutAnchor : NSObject <Swift>

{
    _Bool _offsetIsUnitOffset;
    unsigned long long _edges;
    struct CGPoint _offset;
    struct CGPoint _anchorPoint;
}

@property (nonatomic) unsigned long long edges;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) struct CGPoint anchorPoint;
@property (nonatomic) _Bool offsetIsUnitOffset;
@property (nonatomic, readonly) _Bool isAbsoluteOffset;
@property (nonatomic, readonly) _Bool isFractionalOffset;

+ (id)layoutAnchorWithEdges:(unsigned long long)arg1;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 absoluteOffset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 fractionalOffset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1 offset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1 unitOffset:(struct CGPoint)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEdges:(unsigned long long)arg1 offset:(struct CGPoint)arg2 anchorPoint:(struct CGPoint)arg3 offsetIsUnitOffset:(_Bool)arg4;
- (struct CGRect)_itemFrameForContainerRect:(struct CGRect)arg1 itemSize:(struct CGSize)arg2 itemLayoutAnchor:(id)arg3;

@end
