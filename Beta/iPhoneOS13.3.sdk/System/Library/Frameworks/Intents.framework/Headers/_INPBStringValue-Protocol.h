/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBValueMetadata;

@protocol _INPBStringValue <Swift>

@property (copy, nonatomic) NSString *value;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
