/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class AAUIServerUIHookHandler, FACircleContext, FARequestConfigurator, NSDictionary, NSString, NSURLRequest;

@protocol FACircleRemoteUIDelegateDelegate;

@interface FACircleRemoteUIDelegate : NSObject

{
    FARequestConfigurator *_requestConfigurator;
    NSDictionary *_cachedServerInfo;
    AAUIServerUIHookHandler *_serverHookHandler;
    NSURLRequest *_cachedRequest;
    FACircleContext *_context;
    id <FACircleRemoteUIDelegateDelegate> _delegate;
}

@property (nonatomic, readonly) FACircleContext *context;
@property (weak) id <FACircleRemoteUIDelegateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)_broadcastFamilyDidChangeNotification;
- (void)_reportRequestFailureWithResponse:(id)arg1;
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(_Bool)arg3;
- (void)_notifyDelegateOfCompletionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithContext:(id)arg1 serverHookHandler:(id)arg2;

@end
