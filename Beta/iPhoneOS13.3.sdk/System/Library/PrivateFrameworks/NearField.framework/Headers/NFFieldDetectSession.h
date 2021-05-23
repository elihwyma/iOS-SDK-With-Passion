/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFSession.h>

@class NFWeakReference, NSString;

@protocol NFFieldDetectSessionDelegate;

@interface NFFieldDetectSession : NFSession

{
    NFWeakReference *_delegate;
    _Bool _fieldNotificationSent;
}

@property id <NFFieldDetectSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)didDetectField:(_Bool)arg1;
- (void)didDetectFieldNotification:(id)arg1;
- (void)didEndUnexpectedly;

@end
