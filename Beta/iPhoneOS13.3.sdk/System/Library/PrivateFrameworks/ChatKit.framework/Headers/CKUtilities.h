/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@interface CKUtilities : NSObject

+ (_Bool)deviceHasMultipleSubscriptions;
+ (_Bool)userDefaultBoolForKey:(id)arg1;
+ (_Bool)carrierDefaultBoolForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (_Bool)carrierDefaultBoolForKey:(id)arg1;
+ (_Bool)isIpad;
+ (id)deviceSpecificNameForKey:(id)arg1;

@end
