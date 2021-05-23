/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@protocol SFProductInventory <Swift>

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

@end
