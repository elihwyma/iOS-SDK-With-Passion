/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/Swift-Protocol.h>

@class NSObject;

@protocol OS_os_log;

@protocol STKAlertSessionResponseProvider <Swift>

@property (nonatomic, readonly) NSObject<OS_os_log> *logger;
@property (nonatomic, readonly) _Bool hasSentResponse;

- (unsigned short)sendResponse: /* Error: Ran out of types for this method. */;
- (unsigned short)sendResponse:withStringResult: /* Error: Ran out of types for this method. */;

@end
