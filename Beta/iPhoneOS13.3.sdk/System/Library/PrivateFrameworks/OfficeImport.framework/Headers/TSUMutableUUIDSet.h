/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/TSUUUIDSet.h>

__attribute__((visibility("hidden")))
@interface TSUMutableUUIDSet : TSUUUIDSet

- (_Bool)removeUUID:(const UUIDData_60906e89 *)arg1;
- (_Bool)addUUID:(const UUIDData_60906e89 *)arg1;
- (void)removeAllUuids;
- (void)addUUIDs:(const unordered_set_c6a929bd *)arg1;
- (void)removeUUIDs:(const unordered_set_c6a929bd *)arg1;
- (void)addUuidsFromSet:(id)arg1;
- (void)addUuidsFromVector:(const vector_4dc5f307 *)arg1;
- (void)removeUuidsFromSet:(id)arg1;
- (void)removeUuidsFromVector:(const vector_4dc5f307 *)arg1;

@end
