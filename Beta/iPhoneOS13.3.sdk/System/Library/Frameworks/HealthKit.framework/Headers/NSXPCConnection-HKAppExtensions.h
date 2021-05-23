/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSXPCConnection.h>

@class NSString;

@interface NSXPCConnection (HKAppExtensions)

@property (nonatomic, readonly) _Bool hk_isAppExtension;
@property (copy, nonatomic, readonly) NSString *hk_signingIdentifier;

@end
