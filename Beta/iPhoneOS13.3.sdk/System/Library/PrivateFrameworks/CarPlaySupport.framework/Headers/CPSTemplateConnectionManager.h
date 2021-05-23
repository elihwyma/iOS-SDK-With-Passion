/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CPSTemplateConnectionManager : NSObject

{
    NSObject<OS_dispatch_queue> *_viewControllerAccessQueue;
    NSMutableDictionary *_viewControllersBySceneIdentifier;
    NSMutableDictionary *_templateInstancesBySceneIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)didDisconnectTemplateInstance:(id)arg1;
- (id)_instanceForSceneIdentifier:(id)arg1;
- (_Bool)handleEndpointRequestAction:(id)arg1 forSceneIdentifier:(id)arg2;
- (id)viewControllerForSceneIdentifierCreateIfNecessary:(id)arg1;
- (void)updateTemplateInstanceForScene:(id)arg1;
- (id)_listenerEndpointForTestSceneIdentifier:(id)arg1;

@end
