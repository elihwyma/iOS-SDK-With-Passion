/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/Swift-Protocol.h>

@class MISSING_TYPE, NSObject;

@protocol OS_dispatch_queue;

@protocol FBSServiceFacilityClientMessaging <Swift>

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;

- (MISSING_TYPE *)sendMessage:withType:replyHandler:waitForReply:timeout: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)sendMessage:withType: /* Error: Ran out of types for this method. */;

@end
