/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

#import <Engram/Swift-Protocol.h>

@class ENStableGroupID, NSData;

@interface ENGroupID : NSObject <Swift>

{
    int _generation;
    ENStableGroupID *_stableGroupID;
}

@property (nonatomic, readonly) ENStableGroupID *stableGroupID;
@property (nonatomic, readonly) int generation;
@property (nonatomic, readonly) NSData *dataRepresentation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (_Bool)compare:(id)arg1 withResult:(long long *)arg2 error:(id *)arg3;
- (id)initWithStableGroupID:(id)arg1 generation:(int)arg2;

@end
