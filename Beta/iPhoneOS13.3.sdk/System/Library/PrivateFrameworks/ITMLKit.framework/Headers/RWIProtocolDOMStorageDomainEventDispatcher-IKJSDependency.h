/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <WebInspector/RWIProtocolDOMStorageDomainEventDispatcher.h>

@interface RWIProtocolDOMStorageDomainEventDispatcher (IKJSDependency)

- (void)safe_domStorageItemAddedWithStorageId:(id)arg1 key:(id)arg2 newValue:(id)arg3;
- (void)safe_domStorageItemUpdatedWithStorageId:(id)arg1 key:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)safe_domStorageItemRemovedWithStorageId:(id)arg1 key:(id)arg2;
- (void)safe_domStorageItemsClearedWithStorageId:(id)arg1;

@end
