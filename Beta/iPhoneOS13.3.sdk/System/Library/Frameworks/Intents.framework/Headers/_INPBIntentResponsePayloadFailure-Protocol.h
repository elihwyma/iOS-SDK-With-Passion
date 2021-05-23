/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBIntentResponsePayloadFailure <Swift>

@property (nonatomic) _Bool appLaunchRequested;
@property (nonatomic) _Bool hasAppLaunchRequested;
@property (copy, nonatomic) NSString *enumTypeName;
@property (nonatomic, readonly) _Bool hasEnumTypeName;
@property (nonatomic) int errorCode;
@property (nonatomic) _Bool hasErrorCode;

@end
