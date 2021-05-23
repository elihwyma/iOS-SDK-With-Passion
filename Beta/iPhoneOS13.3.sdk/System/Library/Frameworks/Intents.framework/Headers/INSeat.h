/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INSeat : NSObject <Swift>

{
    NSString *_seatSection;
    NSString *_seatRow;
    NSString *_seatNumber;
    NSString *_seatingType;
}

@property (copy, nonatomic, readonly) NSString *seatSection;
@property (copy, nonatomic, readonly) NSString *seatRow;
@property (copy, nonatomic, readonly) NSString *seatNumber;
@property (copy, nonatomic, readonly) NSString *seatingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithSeatSection:(id)arg1 seatRow:(id)arg2 seatNumber:(id)arg3 seatingType:(id)arg4;

@end
