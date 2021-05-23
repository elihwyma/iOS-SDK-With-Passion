/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/Swift-Protocol.h>

@class MISSING_TYPE, NSError;

@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@protocol CoreDAVSubmittable <Swift>

@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic) id <CoreDAVTaskManager> taskManager;
@property (nonatomic) id <CoreDAVAccountInfoProvider> accountInfoProvider;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) double timeoutInterval;

- (MISSING_TYPE *)finishEarlyWithError: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)submitWithTaskManager: /* Error: Ran out of types for this method. */;

@end
