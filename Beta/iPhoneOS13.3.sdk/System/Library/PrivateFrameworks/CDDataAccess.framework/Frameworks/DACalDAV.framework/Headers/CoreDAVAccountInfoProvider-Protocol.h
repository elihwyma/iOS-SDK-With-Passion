/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/Swift-Protocol.h>

@protocol CoreDAVAccountInfoProvider <Swift>

- (unsigned short)user;
- (unsigned short)scheme;
- (unsigned short)host;
- (unsigned short)port;
- (unsigned short)password;
- (unsigned short)principalURL;
- (unsigned short)accountID;
- (unsigned short)userAgentHeader;
- (unsigned short)identityPersist;
- (unsigned short)serverRoot;
- (unsigned short)serverComplianceClasses;
- (unsigned short)handleCertificateError: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldFailAllTasks;
- (unsigned short)promptUserForNewCoreDAVPasswordWithCompletionBlock: /* Error: Ran out of types for this method. */;

@end
