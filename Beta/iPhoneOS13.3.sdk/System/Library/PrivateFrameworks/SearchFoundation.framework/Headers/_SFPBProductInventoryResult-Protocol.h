/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _SFPBProductInventoryResult <Swift>

@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSArray *availabilitys;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addAvailability: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAvailability;
- (unsigned short)availabilityCount;
- (unsigned short)availabilityAtIndex: /* Error: Ran out of types for this method. */;

@end
