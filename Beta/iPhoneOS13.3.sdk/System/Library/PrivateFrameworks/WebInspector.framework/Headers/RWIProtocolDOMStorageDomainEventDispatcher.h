/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@interface RWIProtocolDOMStorageDomainEventDispatcher : NSObject

{
    struct AugmentableInspectorController *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController *)arg1;
- (void)domStorageItemsClearedWithStorageId:(id)arg1;
- (void)domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2;
- (void)domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3;
- (void)domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;

@end
