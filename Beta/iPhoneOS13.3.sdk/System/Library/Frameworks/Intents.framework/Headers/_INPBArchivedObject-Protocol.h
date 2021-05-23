/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSData, NSString;

@protocol _INPBArchivedObject <Swift>

@property (copy, nonatomic) NSData *messageData;
@property (nonatomic, readonly) _Bool hasMessageData;
@property (copy, nonatomic) NSString *typeName;
@property (nonatomic, readonly) _Bool hasTypeName;

@end
