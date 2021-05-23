/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, _UILibArchiveStreamingReader;

@interface _UIArchiveListingController : NSObject

{
    _UILibArchiveStreamingReader *_archiveReader;
    _Bool _isValidArchive;
    _Bool _excludeDotFilesFromResults;
    NSString *_archivePath;
    long long _appleDoubleIdentificationType;
}

@property (nonatomic, readonly) NSString *archivePath;
@property (nonatomic) long long appleDoubleIdentificationType;
@property (nonatomic) _Bool excludeDotFilesFromResults;

- (void)dealloc;
- (_Bool)determineIsReadableArchive;
- (_Bool)_shouldVisitItem:(id)arg1;
- (id)initWithArchivePath:(id)arg1;
- (_Bool)enumerateLogicalItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;

@end
