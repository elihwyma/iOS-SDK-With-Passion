/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBLocationValue;

@protocol _INPBSpatialEventTrigger <Swift>

@property (nonatomic) int event;
@property (nonatomic) _Bool hasEvent;
@property (retain, nonatomic) _INPBLocationValue *location;
@property (nonatomic, readonly) _Bool hasLocation;
@property (nonatomic) int mobileSpace;
@property (nonatomic) _Bool hasMobileSpace;
@property (copy, nonatomic) NSArray *suggestedValues;
@property (nonatomic, readonly) unsigned long long suggestedValuesCount;

+ (unsigned short)suggestedValuesType;

- (unsigned short)eventAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)mobileSpaceAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsMobileSpace: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSuggestedValues;
- (unsigned short)addSuggestedValues: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestedValuesAtIndex: /* Error: Ran out of types for this method. */;

@end
