/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@protocol HDPlugin <Swift>

@property (copy, nonatomic, readonly) NSString *pluginIdentifier;

- (unsigned short)extensionForHealthDaemon: /* Error: Ran out of types for this method. */;
- (unsigned short)extensionForProfile: /* Error: Ran out of types for this method. */;

+ (unsigned short)shouldLoadPluginForDaemon: /* Error: Ran out of types for this method. */;

@end
