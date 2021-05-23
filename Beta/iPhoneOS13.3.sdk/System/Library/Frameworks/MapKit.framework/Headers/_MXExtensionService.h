/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSExtension, NSUUID, UIViewController, _MXExtension, _MXSerialQueue;

@protocol _MXExtensionURLHandling;

@interface _MXExtensionService : NSObject

{
    _MXSerialQueue *_serialQueue;
    _Bool _didSendConnectionTerminationNotifcation;
    NSUUID *_connectionIdentifier;
    NSExtension *_realExtension;
    _MXExtension *_extensionProxy;
    unsigned long long _state;
    id <_MXExtensionURLHandling> _URLHandlingDelegate;
    struct UIViewController *_remoteViewController;
}

@property (nonatomic, readonly) NSUUID *serviceIdentifier;
@property (retain, nonatomic) NSUUID *connectionIdentifier;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIViewController *remoteViewController;
@property (retain, nonatomic) NSExtension *realExtension;
@property (weak, nonatomic) id <_MXExtensionURLHandling> URLHandlingDelegate;
@property (nonatomic, readonly) _MXExtension *extensionProxy;

+ (id)extensionCompletionQueue;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)cancel;
- (int)processIdentifier;
- (id)context;
- (id)extension;
- (id)startSendingUpdatesForIntent:(id)arg1 toObserver:(id)arg2;
- (void)stopSendingUpdatesForIntent:(id)arg1;
- (id)resolveIntentSlot:(id)arg1 forIntent:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)completeTransactionWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectExtensionWithRemoteViewControllerNeeded:(_Bool)arg1 Handler:(CDUnknownBlockType)arg2;
- (void)_connectExtensionWithRemoteViewControllerNeeded:(_Bool)arg1 Handler:(CDUnknownBlockType)arg2;
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connectExtensionWithHandler:(CDUnknownBlockType)arg1;
- (id)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2;
- (void)disconnectExtension;
- (id)initWithExtensionProxy:(id)arg1;
- (void)connectUIExtensionWithHandler:(CDUnknownBlockType)arg1;
- (id)_errorForIntent:(id)arg1;
- (id)_errorForIntentVendorContext:(id)arg1;
- (id)_handleOrConfirmIntent:(id)arg1 expectResponseClass:(Class)arg2 isHandle:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)_errorForIntentResponse:(id)arg1 withExpectResponseClass:(Class)arg2;
- (void)_completeOrCancelTransaction:(_Bool)arg1 withIntentIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)intentResponseObserverProxy;
- (id)confirmIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setIntentResponseObserverProxy:(id)arg1;
- (void)handleIntent:(id)arg1 expectResponseClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;

@end
