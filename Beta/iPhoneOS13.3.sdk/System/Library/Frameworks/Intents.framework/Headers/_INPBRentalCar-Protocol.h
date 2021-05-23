/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBRentalCar <Swift>

@property (copy, nonatomic) NSString *make;
@property (nonatomic, readonly) _Bool hasMake;
@property (copy, nonatomic) NSString *model;
@property (nonatomic, readonly) _Bool hasModel;
@property (copy, nonatomic) NSString *rentalCarDescription;
@property (nonatomic, readonly) _Bool hasRentalCarDescription;
@property (copy, nonatomic) NSString *rentalCompanyName;
@property (nonatomic, readonly) _Bool hasRentalCompanyName;
@property (copy, nonatomic) NSString *type;
@property (nonatomic, readonly) _Bool hasType;

@end
