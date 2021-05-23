/*
 Image: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
 */

#import <StudyLog/Swift-Protocol.h>

@class NSSet;

@protocol SLGDomainWhitelisting <Swift>

@property (nonatomic) _Bool allowUnspecifiedDomains;
@property (nonatomic, readonly) NSSet *whitelist;

- (unsigned short)addDomain: /* Error: Ran out of types for this method. */;
- (unsigned short)isDomainWhitelisted: /* Error: Ran out of types for this method. */;
- (unsigned short)removeDomain: /* Error: Ran out of types for this method. */;

@end
