/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol SWErrorReporting, SWProcessTerminationPolicyDecider;

@interface SWProcessTerminationManager : NSObject

{
    id <SWProcessTerminationPolicyDecider> _throttler;
    id <SWErrorReporting> _errorReporter;
    NSMutableArray *_onRetryBlocks;
}

@property (nonatomic, readonly) id <SWProcessTerminationPolicyDecider> throttler;
@property (nonatomic, readonly) id <SWErrorReporting> errorReporter;
@property (nonatomic, readonly) NSMutableArray *onRetryBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)webContentProcessTerminated;
- (void)onRetry:(CDUnknownBlockType)arg1;
- (id)initWithTerminationThrottler:(id)arg1 errorReporter:(id)arg2;

@end
