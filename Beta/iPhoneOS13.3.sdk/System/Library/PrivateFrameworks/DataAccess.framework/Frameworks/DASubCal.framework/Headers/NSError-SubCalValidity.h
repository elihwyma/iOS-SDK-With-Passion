/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import <Foundation/NSError.h>

@interface NSError (SubCalValidity)

- (_Bool)isSubCalAuthError;
- (_Bool)isSubCalReachabilityError;

@end
