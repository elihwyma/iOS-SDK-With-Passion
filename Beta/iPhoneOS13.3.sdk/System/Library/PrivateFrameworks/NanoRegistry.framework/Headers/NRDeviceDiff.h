/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <NanoRegistry/NRDiffBase.h>

@class NRPBDeviceDiff, NSDictionary;

@interface NRDeviceDiff : NRDiffBase

{
    NSDictionary *_diffPropertyDiffs;
}

@property (nonatomic, readonly) NSDictionary *diffPropertyDiffs;
@property (nonatomic, readonly) NRPBDeviceDiff *protobuf;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (void)_createIndex;
- (id)initWithDiffPropertyDiffs:(id)arg1;
- (id)allPropertyNames;
- (id)diffPropertyDiffForName:(id)arg1;

@end
