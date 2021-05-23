/*
 Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

#import <AskPermission/APLogConfig.h>

@class NSString;

@interface APMutableLogConfig : APLogConfig

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;

@end
