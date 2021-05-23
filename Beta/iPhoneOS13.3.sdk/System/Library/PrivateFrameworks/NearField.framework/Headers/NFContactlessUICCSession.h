/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFSession.h>

#import <NearField/Swift-Protocol.h>

@class NSString;

@protocol NFContactlessUICCSessionDelegate;

@interface NFContactlessUICCSession : NFSession <Swift>

{
    _Bool _fieldNotificationSent;
    id <NFContactlessUICCSessionDelegate> _delegate;
}

@property id <NFContactlessUICCSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didDetectField:(_Bool)arg1;
- (void)didDetectFieldNotification:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didSelectApplet:(id)arg1;

@end
