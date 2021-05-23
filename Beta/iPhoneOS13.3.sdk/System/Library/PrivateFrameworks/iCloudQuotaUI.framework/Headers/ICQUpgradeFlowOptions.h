/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface ICQUpgradeFlowOptions : NSObject

{
    UIColor *_navigationBarTintColor;
    UIColor *_buttonTintColor;
}

@property (copy, nonatomic) UIColor *navigationBarTintColor;
@property (copy, nonatomic) UIColor *buttonTintColor;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
