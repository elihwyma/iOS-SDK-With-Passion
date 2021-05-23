/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSNumber, NSString;

@interface PKFelicaShinkansenTrain : NSObject <Swift>

{
    NSData *_originStation;
    NSData *_destinationStation;
    NSNumber *_departureTime;
    NSNumber *_arrivalTime;
    NSString *_trainName;
    NSNumber *_carNumber;
    NSNumber *_seatRow;
    NSNumber *_seatNumber;
}

@property (copy, nonatomic, readonly) NSData *originStation;
@property (copy, nonatomic, readonly) NSData *destinationStation;
@property (copy, nonatomic, readonly) NSNumber *departureTime;
@property (copy, nonatomic, readonly) NSNumber *arrivalTime;
@property (copy, nonatomic, readonly) NSString *trainName;
@property (copy, nonatomic, readonly) NSNumber *carNumber;
@property (copy, nonatomic, readonly) NSNumber *seatRow;
@property (copy, nonatomic, readonly) NSNumber *seatNumber;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
