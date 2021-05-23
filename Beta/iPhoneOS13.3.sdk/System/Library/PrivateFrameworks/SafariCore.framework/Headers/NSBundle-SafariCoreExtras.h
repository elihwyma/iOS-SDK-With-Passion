/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSBundle.h>

@class NSString;

@interface NSBundle (SafariCoreExtras)

@property (copy, nonatomic, readonly) NSString *safari_normalizedVersion;

+ (id)safari_safariCoreBundle;
+ (id)safari_safariApplicationPlatformBundleIdentifier;

@end
