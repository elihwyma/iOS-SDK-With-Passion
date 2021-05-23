/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QLAsynchronousOperation.h>

@class QLItem, QLListCell;

@protocol QLListCellDataGenerationOperationDelegate;

__attribute__((visibility("hidden")))
@interface QLListCellDataGenerationOperation : QLAsynchronousOperation

{
    _Bool _didGenerateThumbnail;
    _Bool _didGenerateSubtitleInformation;
    unsigned long long _index;
    QLListCell *_cell;
    QLItem *_item;
    id <QLListCellDataGenerationOperationDelegate> _delegate;
}

@property (nonatomic) unsigned long long index;
@property (weak, nonatomic) QLListCell *cell;
@property (weak, nonatomic) QLItem *item;
@property (weak, nonatomic) id <QLListCellDataGenerationOperationDelegate> delegate;

- (void)main;
- (void)_didGenerateThumbnail:(id)arg1;
- (void)_didDetermineFileSize:(id)arg1 fileTypeString:(id)arg2;
- (void)_finishIfNeeded;
- (id)initWithListCell:(id)arg1 index:(unsigned long long)arg2 item:(id)arg3 delegate:(id)arg4;

@end
