/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSData, NSString;

@protocol _INPBIntentResponsePayloadSuccess <Swift>

@property (copy, nonatomic) NSData *responseMessageData;
@property (nonatomic, readonly) _Bool hasResponseMessageData;
@property (copy, nonatomic) NSString *responseTypeName;
@property (nonatomic, readonly) _Bool hasResponseTypeName;
@property (nonatomic) _Bool shouldOpenContainingApplication;
@property (nonatomic) _Bool hasShouldOpenContainingApplication;

@end
