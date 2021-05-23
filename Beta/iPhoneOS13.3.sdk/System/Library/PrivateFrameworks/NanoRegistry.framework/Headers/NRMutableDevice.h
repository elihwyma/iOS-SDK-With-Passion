/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <NanoRegistry/NRMutableStateBase.h>

@class NRPBMutableDevice, NSMutableDictionary, NSUUID;

@interface NRMutableDevice : NRMutableStateBase

{
    NRPBMutableDevice *_protobuf;
    NSMutableDictionary *_properties;
}

@property (nonatomic, readonly) NSUUID *pairingID;
@property (nonatomic, readonly) _Bool isPaired;
@property (nonatomic, readonly) _Bool isActive;
@property (nonatomic, readonly) _Bool isArchived;
@property (nonatomic, readonly) _Bool migratable;
@property (retain, nonatomic) NSMutableDictionary *properties;
@property (retain, nonatomic) NRPBMutableDevice *protobuf;

+ (_Bool)supportsSecureCoding;
+ (id)enclosedClassTypes;
+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (id)diffsToActivate:(_Bool)arg1 withDate:(id)arg2;
+ (id)diffsToPair:(_Bool)arg1 withDate:(id)arg2;
+ (id)diffsToSetStatusCode:(unsigned long long)arg1 andCompatibilityState:(unsigned short)arg2;
+ (id)diffsToSetStatusCode:(unsigned long long)arg1;
+ (id)diffsToClearStatusCodeAndCompatibilityState;
+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(CDUnknownBlockType)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)invalidate;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)propertyForName:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)supportsCapability:(id)arg1;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (id)applyDiff:(id)arg1 upOnly:(_Bool)arg2 notifyParent:(_Bool)arg3 unconditional:(_Bool)arg4;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (id)_createIndex:(id)arg1;
- (void)removePropertyForName:(id)arg1;
- (id)allPropertyNames;

@end
