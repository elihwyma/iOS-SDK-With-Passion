/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKTextInputSessionData.h>

@class NSString;

@interface STKMutableTextInputSessionData : STKTextInputSessionData

@property (copy, nonatomic) NSString *defaultText;
@property (nonatomic) _Bool isSecure;
@property (nonatomic) _Bool isDigitsOnly;
@property (nonatomic) unsigned long long minimumInputLength;
@property (nonatomic) unsigned long long maximumInputLength;

@end
