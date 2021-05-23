/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBInteger, _INPBIntentMetadata, _INPBString;

@protocol _INPBSaveProfileInCarIntent <Swift>

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBString *profileName;
@property (nonatomic, readonly) _Bool hasProfileName;
@property (retain, nonatomic) _INPBInteger *profileNumber;
@property (nonatomic, readonly) _Bool hasProfileNumber;

@end
