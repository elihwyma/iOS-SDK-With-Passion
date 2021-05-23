/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _SFPBFlight <Swift>

@property (copy, nonatomic) NSString *flightID;
@property (copy, nonatomic) NSString *carrierCode;
@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSString *flightNumber;
@property (copy, nonatomic) NSArray *legs;
@property (copy, nonatomic) NSString *operatorCarrierCode;
@property (copy, nonatomic) NSString *operatorFlightNumber;
@property (copy, nonatomic) NSString *carrierPhoneNumber;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)legsCount;
- (unsigned short)clearLegs;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addLegs: /* Error: Ran out of types for this method. */;
- (unsigned short)legsAtIndex: /* Error: Ran out of types for this method. */;

@end
