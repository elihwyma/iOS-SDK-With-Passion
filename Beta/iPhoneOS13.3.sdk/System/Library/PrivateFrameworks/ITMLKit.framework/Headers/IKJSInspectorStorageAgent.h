/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKJSInspectorController, NSString;

@interface IKJSInspectorStorageAgent : NSObject

{
    IKJSInspectorController *_controller;
}

@property (weak, nonatomic, readonly) IKJSInspectorController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_itemAdded:(id)arg1;
- (void)_itemUpdated:(id)arg1;
- (void)_itemRemoved:(id)arg1;
- (void)_itemsCleared:(id)arg1;
- (id)_storageForStorageId:(id)arg1;
- (id)_storageIdForStorage:(id)arg1;
- (void)enableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)disableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)getDOMStorageItemsWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3;
- (void)setDOMStorageItemWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3 key:(id)arg4 value:(id)arg5;
- (void)removeDOMStorageItemWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 storageId:(id)arg3 key:(id)arg4;
- (id)initWithInspectorController:(id)arg1;
- (void)startListeningForStorageNotifications;
- (void)stopListeningForStorageNotifications;

@end
