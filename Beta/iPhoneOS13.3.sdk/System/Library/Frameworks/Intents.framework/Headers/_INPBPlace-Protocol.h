/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBString;

@protocol _INPBPlace <Swift>

@property (nonatomic) int personalPlaceType;
@property (nonatomic) _Bool hasPersonalPlaceType;
@property (copy, nonatomic) NSArray *placeDescriptors;
@property (nonatomic, readonly) unsigned long long placeDescriptorsCount;
@property (retain, nonatomic) _INPBString *placeSubType;
@property (nonatomic, readonly) _Bool hasPlaceSubType;
@property (retain, nonatomic) _INPBString *placeType;
@property (nonatomic, readonly) _Bool hasPlaceType;

+ (unsigned short)placeDescriptorsType;

- (unsigned short)personalPlaceTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsPersonalPlaceType: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPlaceDescriptors;
- (unsigned short)addPlaceDescriptors: /* Error: Ran out of types for this method. */;
- (unsigned short)placeDescriptorsAtIndex: /* Error: Ran out of types for this method. */;

@end
