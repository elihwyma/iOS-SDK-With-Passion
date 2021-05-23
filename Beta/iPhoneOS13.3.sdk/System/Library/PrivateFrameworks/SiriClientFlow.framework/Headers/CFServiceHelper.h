/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AFServiceHelper;

@interface CFServiceHelper : NSObject

{
    _Bool _isClientLiteHelper;
    id <AFServiceHelper> _serviceHelper;
}

@property (retain) id <AFServiceHelper> serviceHelper;
@property _Bool isClientLiteHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)openSensitiveURL:(id)arg1;
- (void)dismissAssistant;
- (id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;
- (_Bool)isDeviceLockedWithPasscode;
- (_Bool)isTimeoutSuspended;
- (void)handleCommand:(id)arg1 isOneWay:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)peerInfoForCurrentCommand;
- (void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleRemoteCommand:(id)arg1 isOneWay:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithServiceHelper:(id)arg1;
- (id)initClientLiteHelper;

@end
