/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXFeedbackSender : NSObject

{
    unsigned long long _feedbackType;
    _Bool _userLikedResults;
}

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)sendFeedback:(id)arg1 forFeedbackType:(unsigned long long)arg2;
- (void)sendFeedbackToServer:(id)arg1;
- (_Bool)sendFeedbackWithFeedbackEntryUUID:(id)arg1;
- (_Bool)sendPendingFeedbackToServer;
- (void)testTalkToServer;
- (id)generateFeedbackParamsStringForEntry:(id)arg1;
- (void)_sendFeedbackEntryToOSService:(id)arg1;
- (void)_incrementCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;
- (void)_incrementCounterForMixedFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;
- (void)_incrementAGGDCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;
- (void)_incrementMessageTracerCounterForMixedFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;
- (void)_incrementMessageTracerCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2;

@end
