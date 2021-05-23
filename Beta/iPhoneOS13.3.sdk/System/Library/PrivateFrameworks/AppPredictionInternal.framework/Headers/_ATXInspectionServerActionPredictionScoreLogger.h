/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/_ATXInspectionServerPredictionScoreLogger.h>

@class NSMutableDictionary;

@interface _ATXInspectionServerActionPredictionScoreLogger : _ATXInspectionServerPredictionScoreLogger

{
    NSMutableDictionary *_actionMetaDataItems;
}

- (id)init;
- (id)actionMetaDataItems;
- (void)storeMetaDataFromActionContainerForKey:(id)arg1 actionContainer:(id)arg2;

@end
