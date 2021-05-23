/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBInteger, _INPBIntentMetadata, _INPBString;

@protocol _INPBSetProfileInCarIntent <Swift>

@property (retain, nonatomic) _INPBDataString *carName;
@property (nonatomic, readonly) _Bool hasCarName;
@property (nonatomic) _Bool defaultProfile;
@property (nonatomic) _Bool hasDefaultProfile;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBString *profileName;
@property (nonatomic, readonly) _Bool hasProfileName;
@property (retain, nonatomic) _INPBInteger *profileNumber;
@property (nonatomic, readonly) _Bool hasProfileNumber;

@end
