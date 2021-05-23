/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSData, NSString, _INPBValueMetadata;

@protocol _INPBURLValue <Swift>

@property (copy, nonatomic) NSString *absoluteString;
@property (nonatomic, readonly) _Bool hasAbsoluteString;
@property (copy, nonatomic) NSData *scope;
@property (nonatomic, readonly) _Bool hasScope;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

@end
