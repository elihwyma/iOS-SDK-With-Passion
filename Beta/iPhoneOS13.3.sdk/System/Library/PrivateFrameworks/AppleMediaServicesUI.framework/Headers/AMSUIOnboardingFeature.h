/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface AMSUIOnboardingFeature : NSObject

{
    UIImage *_image;
    NSString *_titleText;
    NSString *_descriptionText;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *titleText;
@property (nonatomic, readonly) NSString *descriptionText;

- (id)initWithImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3;

@end
