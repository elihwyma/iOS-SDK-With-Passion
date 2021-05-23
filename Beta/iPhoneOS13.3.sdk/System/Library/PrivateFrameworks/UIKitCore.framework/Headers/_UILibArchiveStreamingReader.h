/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UILibArchiveStreamingReader : NSObject

{
    long long _state;
    struct ui_archive *_laArchive;
    int _laArchiveType;
    NSString *_laArchiveTypeName;
    int _laProcessingState;
    long long _nextLoadedItemEntrySequenceIndex;
    NSMutableArray *_readableLoadedItemEntryQueue;
    NSError *_readError;
    NSString *_archivePath;
    struct ui_archive *_underlyingArchive;
    long long _appleDoubleIdentificationType;
}

@property (nonatomic, readonly) NSString *archivePath;
@property (nonatomic, readonly) struct ui_archive *underlyingArchive;
@property (nonatomic) long long appleDoubleIdentificationType;
@property (nonatomic, readonly) NSString *openedArchiveUnderlyingFormatName;

- (_Bool)open;
- (void)close;
- (id)initForReadingArchivePath:(id)arg1;
- (_Bool)readAllItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)_openArchive;
- (void)_closeArchive;
- (_Bool)_readItemsWithShouldVisitBlock:(CDUnknownBlockType)arg1 visitorBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)_shouldReportAsLogicalItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2;
- (id)_nextSimpleItemFromPendingQueueOrLibArchiveRead;
- (_Bool)_shouldReportAsAppleDoubleItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2;
- (id)_loadItemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry *)arg1;
- (_Bool)readLogicalItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)_debugLoadAndPrintAllRemainingItems;

@end
