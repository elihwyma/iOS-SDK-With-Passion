/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDouble, _INPBInteger, _INPBString;

@protocol _INPBWellnessMetadataValue <Swift>

@property (retain, nonatomic) _INPBDouble *pbDoubleValue;
@property (nonatomic, readonly) _Bool hasPbDoubleValue;
@property (retain, nonatomic) _INPBInteger *ordinalValue;
@property (nonatomic, readonly) _Bool hasOrdinalValue;
@property (retain, nonatomic) _INPBString *pbStringValue;
@property (nonatomic, readonly) _Bool hasPbStringValue;

@end
