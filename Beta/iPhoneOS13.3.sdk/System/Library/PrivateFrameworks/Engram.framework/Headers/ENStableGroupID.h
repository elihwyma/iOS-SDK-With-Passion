/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

#import <Engram/Swift-Protocol.h>

@class NSData, NSUUID;

@interface ENStableGroupID : NSObject <Swift>

{
    NSUUID *_uuid;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic, readonly) NSData *dataRepresentation;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)stableGroupIDLength;
+ (id)stableGroupIDWithCurrentTime;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)_mutableDataRepresentation;
- (int)customUUIDCompare:(unsigned char [16])arg1 u2:(unsigned char [16])arg2;

@end
