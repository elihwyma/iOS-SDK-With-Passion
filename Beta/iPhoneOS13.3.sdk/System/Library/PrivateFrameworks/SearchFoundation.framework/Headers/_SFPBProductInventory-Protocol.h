/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBDate;

@protocol _SFPBProductInventory <Swift>

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *storeId;
@property (nonatomic) int availabilityStatus;
@property (nonatomic) float distance;
@property (nonatomic) int distanceUnit;
@property (retain, nonatomic) _SFPBDate *timestamp;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *storeAddress;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
