/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBValueMetadata;

@protocol _INPBUUIDValue <Swift>

@property (copy, nonatomic) NSString *uuidString;
@property (nonatomic, readonly) _Bool hasUuidString;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
