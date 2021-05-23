/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTViewCarouselLayout : NSObject

{
    _Bool _fillContainer;
    struct CGSize _avtViewAspectRatio;
}

@property (nonatomic, readonly) struct CGSize avtViewAspectRatio;
@property (nonatomic) _Bool fillContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)fullSizeForBounds:(struct CGSize)arg1;
+ (struct CGSize)severalItemsSizeForBounds:(struct CGSize)arg1 aspectRatio:(struct CGSize)arg2;
+ (id)adaptativeLayoutWithAVTViewAspectRatio:(struct CGSize)arg1;

- (struct CGSize)avatarViewSizeForAvailableContentSize:(struct CGSize)arg1;
- (id)initWithAVTViewAspectRatio:(struct CGSize)arg1;
- (struct CGSize)contentViewSizeForSize:(struct CGSize)arg1;

@end
