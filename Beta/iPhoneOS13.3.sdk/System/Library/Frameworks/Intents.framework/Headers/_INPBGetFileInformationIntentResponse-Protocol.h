/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBFileProperty, _INPBString;

@protocol _INPBGetFileInformationIntentResponse <Swift>

@property (retain, nonatomic) _INPBString *entityName;
@property (nonatomic, readonly) _Bool hasEntityName;
@property (retain, nonatomic) _INPBFileProperty *property;
@property (nonatomic, readonly) _Bool hasProperty;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasSuccess;

@end
