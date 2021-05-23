/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, BSServiceConnectionEndpointInjector, NSMutableArray;

@protocol BSServiceConnectionHost, SASSignalServerDelegate;

@interface SASSignalServer : NSObject

{
    _Bool _invalidated;
    BSServiceConnectionEndpointInjector *_workspaceServiceInjector;
    BSServiceConnection<BSServiceConnectionHost> *_connection;
    NSMutableArray *_waitForConnectBlocks;
    id <SASSignalServerDelegate> _weak_delegate;
}

@property (retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (nonatomic) _Bool invalidated;
@property (retain, nonatomic) NSMutableArray *waitForConnectBlocks;
@property (weak, nonatomic) id <SASSignalServerDelegate> weak_delegate;

+ (id)interface;
+ (id)serviceQuality;
+ (id)serverForConnection:(id)arg1;

- (void)_setConnection:(id)arg1;
- (oneway void)buttonLongPressFromButtonIdentifier:(id)arg1 context:(id)arg2;
- (oneway void)activationRequestFromButtonIdentifier:(id)arg1 context:(id)arg2;
- (oneway void)buttonTapFromButtonIdentifier:(id)arg1;
- (oneway void)deactivationRequestFromButtonIdentifier:(id)arg1 context:(id)arg2 options:(id)arg3;
- (oneway void)prewarmFromButtonIdentifier:(id)arg1 longPressInterval:(id)arg2;
- (oneway void)cancelPrewarmFromButtonIdentifier:(id)arg1;
- (oneway void)buttonDownFromButtonIdentifier:(id)arg1 timestamp:(id)arg2;
- (oneway void)buttonUpFromButtonIdentifier:(id)arg1 timestamp:(id)arg2;
- (oneway void)activationRequestFromDirectActionEvent:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)activationRequestFromContinuityWithContext:(id)arg1;
- (oneway void)activationRequestFromBreadcrumb;
- (oneway void)activationRequestFromSimpleActivation:(id)arg1;
- (oneway void)activationRequestFromSpotlightWithContext:(id)arg1;
- (oneway void)activationRequestFromTestingWithContext:(id)arg1;
- (oneway void)unregisterNonButtonSourceWithType:(id)arg1 withUUID:(id)arg2;
- (oneway void)registerNonButtonSourceWithType:(id)arg1 withUUID:(id)arg2;
- (oneway void)unregisterButtonIdentifier:(id)arg1 withUUID:(id)arg2;
- (oneway void)registerButtonIdentifier:(id)arg1 withUUID:(id)arg2;
- (oneway void)activationRequestFromDirectActionEvent:(id)arg1 context:(id)arg2;
- (oneway void)prewarmFromButtonIdentifier:(id)arg1;
- (void)_registerSourceForIdentifier:(id)arg1;
- (void)_unregisterSourceForIdentifier:(id)arg1;
- (void)_activationRequestFromDirectActionEvent:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
