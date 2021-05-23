/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSArray, NSDate, NSString;

@interface INReservation : NSObject <Swift>

{
    INSpeakableString *_itemReference;
    NSString *_reservationNumber;
    NSDate *_bookingTime;
    long long _reservationStatus;
    NSString *_reservationHolderName;
    NSArray *_actions;
}

@property (copy, nonatomic, readonly) INSpeakableString *itemReference;
@property (copy, nonatomic, readonly) NSString *reservationNumber;
@property (copy, nonatomic, readonly) NSDate *bookingTime;
@property (nonatomic, readonly) long long reservationStatus;
@property (copy, nonatomic, readonly) NSString *reservationHolderName;
@property (copy, nonatomic, readonly) NSArray *actions;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6;

@end
