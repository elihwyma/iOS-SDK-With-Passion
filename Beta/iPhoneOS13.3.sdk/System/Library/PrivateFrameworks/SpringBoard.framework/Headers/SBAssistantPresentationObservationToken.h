/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBPresentationObservationToken.h>

@class NSString, SBAssistantController;

@interface SBAssistantPresentationObservationToken : SBPresentationObservationToken

{
    SBAssistantController *_assistantController;
}

@property (nonatomic, readonly) SBAssistantController *assistantController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)state;
- (id)initWithAssistantController:(id)arg1;
- (void)assistantWillAppear:(id)arg1;
- (void)assistantDidAppear:(id)arg1;
- (void)assistantWillDisappear:(id)arg1;
- (void)assistantDidDisappear:(id)arg1;

@end
