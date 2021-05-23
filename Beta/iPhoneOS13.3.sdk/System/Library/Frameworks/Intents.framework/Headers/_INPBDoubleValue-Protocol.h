/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBValueMetadata;

@protocol _INPBDoubleValue <Swift>

@property (nonatomic) double value;
@property (nonatomic) _Bool hasValue;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
