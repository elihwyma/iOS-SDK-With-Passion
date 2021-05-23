/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICAttachment, ICSelectorDelayer, PKDrawing;

@protocol OS_dispatch_queue;

@interface ICInlineDrawingChangeCoalescer : NSObject

{
    ICAttachment *_attachment;
    ICSelectorDelayer *_processChangesSelectorDelayer;
    PKDrawing *_latestDrawing;
    unsigned long long _numberOfChanges;
    NSObject<OS_dispatch_queue> *_mergeQueue;
}

@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) ICSelectorDelayer *processChangesSelectorDelayer;
@property (retain, nonatomic) PKDrawing *latestDrawing;
@property (nonatomic) unsigned long long numberOfChanges;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeQueue;

+ (id)missingOrOutdatedHandwritingSummaryAttachmentsInContext:(id)arg1;
+ (id)handwritingSummaryAttachmentsInContext:(id)arg1;
+ (void)generateMissingOrOutdatedHandwritingSummariesInContext:(id)arg1;
+ (void)purgeHandwritingSummariesInContext:(id)arg1;

- (void)dealloc;
- (_Bool)hasChanges;
- (id)initWithAttachment:(id)arg1;
- (void)drawingDataDidChange:(id)arg1;
- (void)processIndexableContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateNowIfNecessary;
- (void)mergeDrawingChanges;
- (id)retrieveAndClearLatestDrawingToMerge;
- (void)mergeDrawingWithDrawing:(id)arg1;
- (void)updateVersionIfNeededForAttachment:(id)arg1 withDrawing:(id)arg2;

@end
