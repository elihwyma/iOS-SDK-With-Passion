/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXGLayout;

@interface PXGSpriteReference : NSObject

{
    _Bool _isDynamic;
    unsigned int _spriteIndex;
    long long _layoutVersion;
    PXGLayout *_layout;
    id _objectReference;
}

@property (nonatomic) unsigned int spriteIndex;
@property (nonatomic) long long layoutVersion;
@property (weak, nonatomic) PXGLayout *layout;
@property (nonatomic) _Bool isDynamic;
@property (nonatomic, readonly) _Bool isValid;
@property (retain, nonatomic) id objectReference;
@property (nonatomic, readonly) _Bool hasObjectReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_init;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;

@end
