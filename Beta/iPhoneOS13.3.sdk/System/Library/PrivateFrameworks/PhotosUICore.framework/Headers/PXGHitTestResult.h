/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXGLayout, PXGSpriteReference;

@interface PXGHitTestResult : NSObject

{
    _Bool _isDecorated;
    PXGSpriteReference *_spriteReference;
    PXGLayout *_layout;
    NSString *_identifier;
    id _userData;
}

@property (nonatomic, readonly) PXGSpriteReference *spriteReference;
@property (nonatomic, readonly) PXGLayout *layout;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id userData;
@property (nonatomic, readonly) _Bool isDecorated;

- (id)init;
- (id)description;
- (id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4;

@end
