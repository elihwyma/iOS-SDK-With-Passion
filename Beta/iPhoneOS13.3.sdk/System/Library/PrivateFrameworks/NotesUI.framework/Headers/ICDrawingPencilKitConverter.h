/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@protocol OS_dispatch_queue;

@interface ICDrawingPencilKitConverter : NSObject

{
    _Bool _isThrowaway;
    NSOperationQueue *_converterQueue;
    NSMapTable *_lastOperationForAttachmentID;
    NSObject<OS_dispatch_queue> *_convertDispatchQueue;
    NSMutableDictionary *_accountIDCanBeUpdated;
    NSMutableDictionary *_accountIDDeviceCheckDate;
    NSMutableArray *_mutableFailedSketches;
}

@property (retain, nonatomic) NSOperationQueue *converterQueue;
@property (retain, nonatomic) NSMapTable *lastOperationForAttachmentID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *convertDispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *accountIDCanBeUpdated;
@property (retain, nonatomic) NSMutableDictionary *accountIDDeviceCheckDate;
@property (retain, nonatomic) NSMutableArray *mutableFailedSketches;
@property (nonatomic) _Bool isThrowaway;
@property (nonatomic, readonly) NSArray *failedSketches;

+ (id)sharedConverter;
+ (_Bool)canUpdateFullscreenSketchAttachment:(id)arg1;
+ (_Bool)canUpdateInlineDrawingAttachment:(id)arg1;
+ (id)newThrowawayConverter;
+ (unsigned long long)countOfUpdatableDrawingsInNote:(id)arg1;

- (id)init;
- (void)convertAllSketchesWithProgress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)convertAllSketchesInNote:(id)arg1;
- (id)convertSketchAttachment:(id)arg1 toInlineDrawingAtRange:(struct _NSRange)arg2 inNote:(id)arg3;
- (id)convertSketch:(id)arg1;
- (_Bool)compareDrawingAttachment:(id)arg1 withConvertedDrawing:(id)arg2;
- (void)convertDrawingsInNote:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (_Bool)shouldConvertAllDrawingsIfNeeded;
- (_Bool)shouldAutoConvertNote:(id)arg1;
- (id)addOperationForAttachment:(id)arg1 automatic:(_Bool)arg2;
- (void)canAutoUpdateDrawingsInAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)countOfDrawingsNeedingConversionInNote:(id)arg1;
- (void)convertAllSketchesWithProgress:(id)arg1;
- (id)updateInlineDrawingAttachment:(id)arg1;
- (void)convertDrawingsInNote:(id)arg1 inWindow:(struct UIWindow *)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performThrowawayConversionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)convertAllDrawingsIfNeeded;
- (void)convertDrawingsInNoteIfNeeded:(id)arg1;
- (void)operationComplete:(id)arg1;

@end
