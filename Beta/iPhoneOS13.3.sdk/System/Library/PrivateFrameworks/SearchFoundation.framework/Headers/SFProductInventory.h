/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface SFProductInventory : NSObject <Swift>

{
    struct {
        unsigned int type:1;
        unsigned int availabilityStatus:1;
        unsigned int distanceUnit:1;
    } _has;
    int _type;
    int _availabilityStatus;
    int _distanceUnit;
    NSString *_storeId;
    NSNumber *_distance;
    NSDate *_timestamp;
    NSString *_storeName;
    NSString *_storeAddress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *storeId;
@property (nonatomic) int availabilityStatus;
@property (copy, nonatomic) NSNumber *distance;
@property (nonatomic) int distanceUnit;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *storeAddress;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasType;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasAvailabilityStatus;
- (_Bool)hasDistanceUnit;

@end
