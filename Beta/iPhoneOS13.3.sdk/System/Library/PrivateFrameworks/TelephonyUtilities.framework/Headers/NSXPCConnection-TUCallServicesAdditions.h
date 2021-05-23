/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSXPCConnection.h>

@class NSString;

@interface NSXPCConnection (TUCallServicesAdditions)

@property (copy, nonatomic, readonly) NSString *processName;
@property (copy, nonatomic, readonly) NSString *processBundleIdentifier;

+ (id)callServicesServerXPCInterface;
+ (id)callServicesClientXPCInterface;

@end
