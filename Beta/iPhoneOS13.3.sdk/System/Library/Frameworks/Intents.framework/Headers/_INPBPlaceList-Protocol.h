/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCondition;

@protocol _INPBPlaceList <Swift>

@property (retain, nonatomic) _INPBCondition *condition;
@property (nonatomic, readonly) _Bool hasCondition;
@property (copy, nonatomic) NSArray *places;
@property (nonatomic, readonly) unsigned long long placesCount;

+ (unsigned short)placeType;

- (unsigned short)addPlace: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPlaces;
- (unsigned short)placeAtIndex: /* Error: Ran out of types for this method. */;

@end
