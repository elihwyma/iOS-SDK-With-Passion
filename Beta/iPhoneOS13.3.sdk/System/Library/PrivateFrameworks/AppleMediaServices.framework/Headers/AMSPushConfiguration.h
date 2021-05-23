/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface AMSPushConfiguration : NSObject

{
    NSString *_userNotificationExtensionId;
    NSSet *_enabledActionTypes;
}

@property (retain, nonatomic) NSString *userNotificationExtensionId;
@property (retain, nonatomic) NSSet *enabledActionTypes;

- (id)initWithEnabledActionTypes:(id)arg1;

@end
