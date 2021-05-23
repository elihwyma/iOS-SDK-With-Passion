/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSUUUIDSet : NSObject <Swift>

{
    unsigned int _index;
    unordered_set_c6a929bd _uuidSet;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned int index;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (id).cxx_construct;
- (void)setIndex:(unsigned int)arg1;
- (id)initWithUUID:(const UUIDData_60906e89 *)arg1;
- (UUIDData_60906e89)anyUuid;
- (_Bool)p_addUUID:(const UUIDData_60906e89 *)arg1;
- (_Bool)p_removeUUID:(const UUIDData_60906e89 *)arg1;
- (void)p_addUUIDs:(const unordered_set_c6a929bd *)arg1;
- (void)p_addUUIDsFromVector:(const vector_4dc5f307 *)arg1;
- (void)p_removeUUIDsFromVector:(const vector_4dc5f307 *)arg1;
- (id)initWithUUIDSet:(id)arg1;
- (vector_4dc5f307)uuidsAsVector;
- (_Bool)isAllInvalid;
- (id)expandedSetWithUuid:(const UUIDData_60906e89 *)arg1;
- (id)reducedSetMinusUuid:(const UUIDData_60906e89 *)arg1;
- (id)expandedSetWithUuids:(const unordered_set_c6a929bd *)arg1;
- (id)reducedSetMinusUuids:(const unordered_set_c6a929bd *)arg1;
- (id)expandedSetWithUuidsFromVector:(const vector_4dc5f307 *)arg1;
- (id)reducedSetMinusUuidsFromVector:(const vector_4dc5f307 *)arg1;
- (void)p_removeUUIDs:(const unordered_set_c6a929bd *)arg1;
- (id)initWithUUIDVector:(const vector_4dc5f307 *)arg1;
- (void)foreachUuid:(CDUnknownBlockType)arg1;
- (_Bool)containsUuid:(const UUIDData_60906e89 *)arg1;

@end
