/*
 Image: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CLSNotificationBannerDisplayManager : NSObject

{
    NSDate *_lastBannerTime;
}

@property (retain, nonatomic) NSDate *lastBannerTime;

+ (id)shared;

- (void)showPrivacyModalView;
- (void)showBannerWithTitle:(id)arg1 message:(id)arg2;

@end
