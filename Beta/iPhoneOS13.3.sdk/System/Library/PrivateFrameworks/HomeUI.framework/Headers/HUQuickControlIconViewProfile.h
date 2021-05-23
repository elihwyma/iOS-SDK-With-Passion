/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewProfile.h>

@class NSObject, NSString, UIColor;

@protocol HFIconDescriptor;

@interface HUQuickControlIconViewProfile : HUQuickControlViewProfile

{
    NSString *_statusString;
    UIColor *_statusTextColor;
    NSString *_supplementaryString;
    NSObject<HFIconDescriptor> *_iconDescriptor;
}

@property (retain, nonatomic) NSString *statusString;
@property (retain, nonatomic) UIColor *statusTextColor;
@property (retain, nonatomic) NSString *supplementaryString;
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
