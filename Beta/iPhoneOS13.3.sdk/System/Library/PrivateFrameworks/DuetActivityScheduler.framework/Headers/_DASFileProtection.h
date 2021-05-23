/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSObject.h>

@interface _DASFileProtection : NSObject

+ (_Bool)supportsSecureCoding;
+ (id)complete;
+ (id)none;
+ (id)completeUnlessOpen;
+ (id)completeUntilFirstUserAuthentication;

@end
