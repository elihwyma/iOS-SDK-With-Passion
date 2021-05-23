/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/SBKRequestData.h>

__attribute__((visibility("hidden")))
@interface SBKSyncRequestData : SBKRequestData

- (id)syncTransaction;
- (id)_serializableUpdateItemPayloadDictionaryForKey:(id)arg1;
- (id)_serializableDeleteItemPayloadDictionaryForKey:(id)arg1;
- (id)_serializableConflictDetectionValue;
- (_Bool)_needsConflictDetection;
- (id)_serializableConflictDetectionOrdinalForKey:(id)arg1;
- (id)serializableRequestBodyPropertyList;

@end
