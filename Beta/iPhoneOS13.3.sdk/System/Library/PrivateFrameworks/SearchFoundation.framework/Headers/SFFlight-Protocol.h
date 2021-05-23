/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFFlight <Swift>

@property (copy, nonatomic) NSString *flightID;
@property (copy, nonatomic) NSString *carrierCode;
@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSString *flightNumber;
@property (copy, nonatomic) NSArray *legs;
@property (copy, nonatomic) NSString *operatorCarrierCode;
@property (copy, nonatomic) NSString *operatorFlightNumber;
@property (copy, nonatomic) NSString *carrierPhoneNumber;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
