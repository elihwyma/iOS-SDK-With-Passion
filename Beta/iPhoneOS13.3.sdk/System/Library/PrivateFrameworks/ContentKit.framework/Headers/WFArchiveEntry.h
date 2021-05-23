/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFArchiveEntry : NSObject

{
    struct archive_entry *_entry;
    CDUnknownBlockType _dataProvider;
}

@property (nonatomic, readonly) struct archive_entry *entry;
@property (nonatomic, readonly) CDUnknownBlockType dataProvider;

+ (id)archiveEntriesWithTopLevelFileRepresentation:(id)arg1 usedFilenames:(id)arg2;

- (void)dealloc;
- (id)initWithDirectoryName:(id)arg1;
- (id)initWithFilename:(id)arg1 fileRepresentation:(id)arg2;
- (id)initWithFilename:(id)arg1 fileType:(unsigned short)arg2 filePermission:(unsigned short)arg3 fileSize:(long long)arg4 modificationDate:(id)arg5 creationDate:(id)arg6 dataProvider:(CDUnknownBlockType)arg7;

@end
