/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@protocol HDHealthPlugin <Swift>

@property (copy, nonatomic, readonly) NSString *pluginIdentifier;

- (unsigned short)activate;
- (unsigned short)initWithHealthDaemon: /* Error: Ran out of types for this method. */;

@end
