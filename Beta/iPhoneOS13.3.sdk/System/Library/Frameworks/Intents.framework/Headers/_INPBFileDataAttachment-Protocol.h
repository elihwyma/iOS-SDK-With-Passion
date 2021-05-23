/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSData, NSString;

@protocol _INPBFileDataAttachment <Swift>

@property (copy, nonatomic) NSData *data;
@property (nonatomic, readonly) _Bool hasData;
@property (copy, nonatomic) NSString *fileName;
@property (nonatomic, readonly) _Bool hasFileName;

@end
