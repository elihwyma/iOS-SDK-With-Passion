/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBContactValue, _INPBImageValue;

@protocol _INPBRideDriver <Swift>

@property (retain, nonatomic) _INPBImageValue *image;
@property (nonatomic, readonly) _Bool hasImage;
@property (retain, nonatomic) _INPBContactValue *person;
@property (nonatomic, readonly) _Bool hasPerson;
@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic, readonly) _Bool hasPhoneNumber;
@property (copy, nonatomic) NSString *rating;
@property (nonatomic, readonly) _Bool hasRating;

@end
