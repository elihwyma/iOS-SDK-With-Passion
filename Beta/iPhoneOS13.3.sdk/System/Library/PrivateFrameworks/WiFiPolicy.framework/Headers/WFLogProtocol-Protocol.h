/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@class NSNumber;

@protocol WFLogProtocol <Swift>

@property (copy, getter=getLogLifespanInDays) NSNumber *logLifespanInDays;
@property (getter=getLogPrivacy) unsigned long long logPrivacy;
@property (getter=getLogLevelEnable) unsigned long long logLevelEnable;
@property (getter=getLogLevelPersist) unsigned long long logLevelPersist;
@property (getter=getMaxFileSizeInMB) unsigned long long maxSizeInKb;

- (unsigned short)dump;
- (unsigned short)WFLog:privacy:message:valist: /* Error: Ran out of types for this method. */;
- (unsigned short)WFLog:privacy:cfStrMsg: /* Error: Ran out of types for this method. */;

@end
