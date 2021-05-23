/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFSession.h>

#import <NearField/Swift-Protocol.h>

@class NFApplet, NFWeakReference, NSDictionary, NSString;

@protocol NFContactlessSessionDelegate;

@interface NFContactlessSession : NFSession <Swift>

{
    NSDictionary *_appletsById;
    NFWeakReference *_delegate;
    _Bool _fieldNotificationSent;
    NFApplet *_activeApplet;
}

@property id <NFContactlessSessionDelegate> delegate;
@property (readonly) NFApplet *activeApplet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)endSession;
- (_Bool)stopCardEmulation:(id *)arg1;
- (id)appletWithIdentifier:(id)arg1;
- (_Bool)stopCardEmulation;
- (void)endSessionWithCompletion:(CDUnknownBlockType)arg1;
- (id)allApplets;
- (void)didStartSession:(id)arg1;
- (void)didDetectField:(_Bool)arg1;
- (void)didDetectFieldNotification:(id)arg1;
- (void)didEndUnexpectedly;
- (_Bool)setActiveApplet:(id)arg1 error:(id *)arg2;
- (_Bool)startCardEmulation:(id *)arg1;
- (void)didSelectApplet:(id)arg1;
- (void)didFelicaStateChange:(id)arg1;
- (_Bool)setActiveApplet:(id)arg1;
- (_Bool)startCardEmulation;

@end
