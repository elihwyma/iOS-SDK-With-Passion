/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <MediaStream/Swift-Protocol.h>

@protocol MSPlatform <Swift>

- (unsigned short)UDID;
- (unsigned short)socketOptions;
- (unsigned short)shouldLogAtLevel: /* Error: Ran out of types for this method. */;
- (unsigned short)logFacility:level:format:args: /* Error: Ran out of types for this method. */;
- (unsigned short)logFile:func:line:facility:level:format:args: /* Error: Ran out of types for this method. */;
- (unsigned short)fullNameFromFirstName:lastName: /* Error: Ran out of types for this method. */;
- (unsigned short)pathMediaStreamDir;
- (unsigned short)publisherPluginClass;
- (unsigned short)subscriberPluginClass;
- (unsigned short)hardwareString;
- (unsigned short)OSString;
- (unsigned short)appBundleInfoString;
- (unsigned short)policyMayUpload;
- (unsigned short)policyMayDownload;
- (unsigned short)baseURLForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)authTokenForPersonID: /* Error: Ran out of types for this method. */;
- (unsigned short)theDaemon;

@end
