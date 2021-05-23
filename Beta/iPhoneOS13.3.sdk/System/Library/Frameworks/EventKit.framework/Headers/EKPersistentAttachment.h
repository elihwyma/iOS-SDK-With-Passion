/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKPersistentObject.h>

@interface EKPersistentAttachment : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fileSize;
- (void)setURL:(id)arg1;
- (id)UUID;
- (void)setUUID:(id)arg1;
- (id)URL;
- (void)setFileSize:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (int)entityType;
- (id)fileFormat;
- (id)URLForPendingFileCopy;
- (void)setFileFormat:(id)arg1;
- (id)semanticIdentifier;
- (_Bool)isBinary;
- (void)setIsBinary:(_Bool)arg1;
- (id)localRelativePath;
- (void)setLocalRelativePath:(id)arg1;
- (id)XPropertiesData;
- (void)setXPropertiesData:(id)arg1;
- (id)externalId;
- (void)setExternalId:(id)arg1;
- (void)setURLForPendingFileCopy:(id)arg1;

@end
