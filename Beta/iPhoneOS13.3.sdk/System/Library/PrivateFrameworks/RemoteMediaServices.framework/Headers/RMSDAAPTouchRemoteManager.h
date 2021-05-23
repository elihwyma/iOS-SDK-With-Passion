/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString, RMSDAAPRequestManager, RMSTouchRemoteSocket;

@protocol RMSDAAPTouchRemoteManagerDelegate;

__attribute__((visibility("hidden")))
@interface RMSDAAPTouchRemoteManager : NSObject

{
    RMSDAAPRequestManager *_requestManager;
    RMSTouchRemoteSocket *_socket;
    long long _controlPromptRevision;
    int _encryptionKey;
    int _portSecret;
    int _port;
    float _touchDistanceMin;
    float _touchDistanceMax;
    unsigned int _touchTimeMin;
    unsigned int _touchTimeMax;
    _Bool _shouldWriteTimestampsForPPT;
    id <RMSDAAPTouchRemoteManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <RMSDAAPTouchRemoteManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)touchRemoteSocketDidConnect:(id)arg1;
- (void)touchRemoteSocketDidDisconnect:(id)arg1;
- (id)initWithRequestManager:(id)arg1;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(int)arg2;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(int)arg2;
- (void)sendNavigationCommand:(long long)arg1;
- (void)initiateControlWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_createSocket;
- (void)_requestPromptUpdate:(CDUnknownBlockType)arg1;
- (struct CGPoint)_locationForDirection:(long long)arg1 repeatCount:(int)arg2;
- (unsigned int)_timeForDirection:(long long)arg1 repeatCount:(int)arg2;
- (void)_parsePortInfoItems:(id)arg1;
- (void)_requestPortInfo;

@end
