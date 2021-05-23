/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObject.h>

@class NSNumber, NSString, NSURL;

@interface EKAttachment : EKObject

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *localRelativePath;
@property (nonatomic, readonly) NSURL *localURL;
@property (nonatomic, readonly) _Bool isBinary;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSString *fileFormat;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSURL *URLForPendingFileCopy;

+ (id)createTempDestinationURLWithExtension:(id)arg1;
+ (Class)frozenClass;
+ (id)_copyFileAtURLToTemporaryDirectory:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setURL:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setFileSize:(id)arg1;
- (id)initWithFilepath:(id)arg1;
- (long long)compareFileNames:(id)arg1;
- (void)setFileFormat:(id)arg1;
- (id)semanticIdentifier;
- (void)setIsBinary:(_Bool)arg1;
- (void)setLocalRelativePath:(id)arg1;
- (id)XPropertiesData;
- (void)setXPropertiesData:(id)arg1;
- (id)externalId;
- (void)setExternalId:(id)arg1;
- (void)setURLForPendingFileCopy:(id)arg1;
- (void)setFileNameRaw:(id)arg1;
- (id)fileNameRaw;

@end
