/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class PXGSpriteReference;

@interface PXGAnchorConstraint : NSObject <Swift>

{
    _Bool _visiblePortionOnly;
    unsigned int _spriteEdge;
    unsigned int _visibleRectEdge;
    PXGSpriteReference *_spriteReference;
    unsigned long long _referencingOptions;
    long long _spriteAttribute;
    long long _inequality;
    double _offset;
    struct UIEdgeInsets _padding;
}

@property (retain, nonatomic) PXGSpriteReference *spriteReference;
@property (nonatomic) unsigned long long referencingOptions;
@property (nonatomic) long long spriteAttribute;
@property (nonatomic) _Bool visiblePortionOnly;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) long long inequality;
@property (nonatomic) unsigned int spriteEdge;
@property (nonatomic) unsigned int visibleRectEdge;
@property (nonatomic) double offset;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
