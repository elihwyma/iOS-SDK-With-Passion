/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSData, NSString, _INPBURLValue;

@protocol _INPBFile <Swift>

@property (copy, nonatomic) NSData *data;
@property (nonatomic, readonly) _Bool hasData;
@property (retain, nonatomic) _INPBURLValue *fileURL;
@property (nonatomic, readonly) _Bool hasFileURL;
@property (copy, nonatomic) NSString *filename;
@property (nonatomic, readonly) _Bool hasFilename;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (nonatomic, readonly) _Bool hasTypeIdentifier;

@end
