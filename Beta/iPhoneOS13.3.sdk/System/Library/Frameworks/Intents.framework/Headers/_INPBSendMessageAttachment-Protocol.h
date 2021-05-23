/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBFileDataAttachment, _INPBURLValue;

@protocol _INPBSendMessageAttachment <Swift>

@property (nonatomic) _Bool currentLocation;
@property (nonatomic, readonly) _Bool hasCurrentLocation;
@property (retain, nonatomic) _INPBFileDataAttachment *file;
@property (nonatomic, readonly) _Bool hasFile;
@property (retain, nonatomic) _INPBURLValue *fileURL;
@property (nonatomic, readonly) _Bool hasFileURL;
@property (retain, nonatomic) _INPBURLValue *speechDataURL;
@property (nonatomic, readonly) _Bool hasSpeechDataURL;
@property (nonatomic, readonly) unsigned long long whichDatasource;

@end
