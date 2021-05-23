/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/Swift-Protocol.h>

@protocol EDAssetDownloadSchedulerContinuation <Swift>

- (unsigned short)rescheduleAfterSuccess;
- (unsigned short)rescheduleAfterFailure;
- (unsigned short)stopScheduling;

@end
