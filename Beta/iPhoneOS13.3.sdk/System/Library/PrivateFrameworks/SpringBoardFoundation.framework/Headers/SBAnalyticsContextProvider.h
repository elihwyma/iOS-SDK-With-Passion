/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SBFAnalyticsBackend, SBSAnalyticsState;

@interface SBAnalyticsContextProvider : NSObject

{
    SBSAnalyticsState *_eventPayload;
    SBFAnalyticsBackend *_backend;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SBSAnalyticsState *eventPayload;

- (void)stateForQueryName:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithEventPayload:(id)arg1 backend:(id)arg2;

@end
