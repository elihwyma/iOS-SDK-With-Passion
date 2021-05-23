/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSLogConfig.h>

@class NSString;

@interface AMSMutableLogConfig : AMSLogConfig

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;

@end
