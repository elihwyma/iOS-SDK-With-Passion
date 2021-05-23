/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBAirline <Swift>

@property (copy, nonatomic) NSString *iataCode;
@property (nonatomic, readonly) _Bool hasIataCode;
@property (copy, nonatomic) NSString *icaoCode;
@property (nonatomic, readonly) _Bool hasIcaoCode;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasName;

@end
