/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError;

@interface _UISaveToCameraRollSaveItemsController : NSObject

{
    _Bool _successToReport;
    CDUnknownBlockType _saveCompletionBlock;
    NSArray *_itemsToSchedule;
    long long _pendingSaveCount;
    NSError *_errorToReport;
}

@property (nonatomic, readonly) CDUnknownBlockType saveCompletionBlock;
@property (nonatomic, readonly) NSArray *itemsToSchedule;
@property (nonatomic, readonly) long long pendingSaveCount;
@property (nonatomic, readonly) NSError *errorToReport;
@property (nonatomic, readonly) _Bool successToReport;

- (id)initWithItems:(id)arg1 saveCompletionBlock:(CDUnknownBlockType)arg2;
- (void)beginSaving;
- (void)beginSavingItem:(id)arg1;
- (void)_didCompleteSavingItem:(id)arg1 error:(id)arg2 contextInfo:(void *)arg3;
- (void)_noteDidCompleteSavingItem:(id)arg1 error:(id)arg2;
- (void)_invokeSaveCompletionBlock;

@end
