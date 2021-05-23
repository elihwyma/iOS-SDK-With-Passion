/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBValueMetadata;

@protocol _INPBRangeValue <Swift>

@property (nonatomic) unsigned long long length;
@property (nonatomic) _Bool hasLength;
@property (nonatomic) unsigned long long location;
@property (nonatomic) _Bool hasLocation;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
