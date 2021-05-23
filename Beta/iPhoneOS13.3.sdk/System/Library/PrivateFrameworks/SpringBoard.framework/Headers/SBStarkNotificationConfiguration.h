/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionEndpoint, CRCarPlayAppPolicyEvaluator, FBSDisplayIdentity, NSHashTable, NSMutableDictionary, NSString, UIWindow;

@interface SBStarkNotificationConfiguration : NSObject

{
    UIWindow *_focusWindow;
    FBSDisplayIdentity *_displayIdentity;
    _Bool _connectedWirelessly;
    CRCarPlayAppPolicyEvaluator *_appPolicyEvaluator;
    NSMutableDictionary *_appPolicyForBundleID;
    BSServiceConnectionEndpoint *_openServiceEndpoint;
    struct CGRect _sceneBounds;
    NSHashTable *_layoutObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIWindow *focusWindow;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly, getter=isConnectedWirelessly) _Bool connectedWirelessly;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *openServiceEndpoint;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setGeoSupported:(_Bool)arg1;
- (id)policyForApp:(id)arg1;
- (struct CGRect)frameWithInterfaceOrientation:(long long)arg1;
- (_Bool)shouldClipForWindow:(id)arg1;

@end
