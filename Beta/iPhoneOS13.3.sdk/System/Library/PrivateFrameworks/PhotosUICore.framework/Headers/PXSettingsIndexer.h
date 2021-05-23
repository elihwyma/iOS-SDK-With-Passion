/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSProgress, PXSettings, PXSettingsIndex;

@interface PXSettingsIndexer : NSObject

{
    PXSettings *_rootSettings;
    PXSettingsIndex *_index;
    NSMutableArray *_completionHandlers;
    long long _state;
    NSProgress *_indexingProgress;
}

@property (nonatomic, readonly) NSMutableArray *completionHandlers;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSProgress *indexingProgress;
@property (retain, nonatomic) PXSettingsIndex *index;
@property (nonatomic, readonly) PXSettings *rootSettings;

- (id)init;
- (id)initWithRootSettings:(id)arg1;
- (id)startIndexingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startIndexingIfNecessary;
- (void)_handleResultIndex:(id)arg1;
- (void)_callCompletionHandlersIfNecessary;

@end
