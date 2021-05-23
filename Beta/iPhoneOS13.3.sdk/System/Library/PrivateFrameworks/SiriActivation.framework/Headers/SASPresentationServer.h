/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, BSServiceConnectionEndpointInjector, NSMutableArray;

@protocol BSServiceConnectionHost, SASPresentationServerDelegate;

@interface SASPresentationServer : NSObject

{
    _Bool _invalidated;
    BSServiceConnectionEndpointInjector *_workspaceServiceInjector;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    NSMutableArray *_waitForConnectBlocks;
    id <SASPresentationServerDelegate> _weak_delegate;
    long long _presentationIdentifier;
}

@property (retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (nonatomic) _Bool invalidated;
@property (retain, nonatomic) NSMutableArray *waitForConnectBlocks;
@property (weak, nonatomic) id <SASPresentationServerDelegate> weak_delegate;
@property (nonatomic) long long presentationIdentifier;

+ (id)interface;
+ (id)serviceQuality;
+ (void)_unregisterConnection:(id)arg1;
+ (id)serverForConnection:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_setConnection:(id)arg1;
- (oneway void)willDismiss;
- (oneway void)unregisterPresentationIdentifier:(id)arg1;
- (oneway void)registerPresentationIdentifier:(id)arg1;
- (oneway void)failedToPresentSiriWithError:(id)arg1;
- (oneway void)didPresentSiri;
- (oneway void)didDismiss;
- (oneway void)handleMarkBulletinWithIdentifier:(id)arg1 asRead:(id)arg2;
- (id)bulletinsOnLockScreen;
- (id)allBulletins;
- (oneway void)speechRequestStartedFromSiriOrb;
- (oneway void)speechRequestCancelledFromSiriOrb;
- (id)bulletinForIdentifier:(id)arg1;

@end
