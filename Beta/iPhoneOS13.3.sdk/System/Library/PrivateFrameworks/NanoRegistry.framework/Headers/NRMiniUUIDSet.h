/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSData;

@interface NRMiniUUIDSet : NSObject <Swift>

{
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _miniUUIDs;
    NSData *_data;
}

@property (retain, nonatomic) NSData *data;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id).cxx_construct;
- (id)initWithUUIDSet:(id)arg1;
- (_Bool)hasUUID:(id)arg1;

@end
