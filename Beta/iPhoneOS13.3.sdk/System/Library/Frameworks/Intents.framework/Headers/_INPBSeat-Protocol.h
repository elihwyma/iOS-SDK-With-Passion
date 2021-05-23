/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBSeat <Swift>

@property (copy, nonatomic) NSString *seatNumber;
@property (nonatomic, readonly) _Bool hasSeatNumber;
@property (copy, nonatomic) NSString *seatRow;
@property (nonatomic, readonly) _Bool hasSeatRow;
@property (copy, nonatomic) NSString *seatSection;
@property (nonatomic, readonly) _Bool hasSeatSection;
@property (copy, nonatomic) NSString *seatingType;
@property (nonatomic, readonly) _Bool hasSeatingType;

@end
