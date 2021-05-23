/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselItem : NSObject

{
    _Bool _shouldShowVariants;
    UIImage *_cachedImage;
    CDUnknownBlockType _imageProvider;
    unsigned long long _imageType;
    NSString *_title;
    double _imageInsetPercentage;
}

@property (retain, nonatomic) UIImage *cachedImage;
@property (copy, nonatomic, readonly) CDUnknownBlockType imageProvider;
@property (nonatomic) unsigned long long imageType;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) double imageInsetPercentage;
@property (nonatomic) _Bool shouldShowVariants;

- (id)initWithTitle:(id)arg1;
- (id)initWithImageInsetPercentage:(double)arg1 imageProvider:(CDUnknownBlockType)arg2;

@end
