/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice;

@interface ATXWalletDataSource : NSObject

{
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)arg1;
- (void)passesWithStyle:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (long long)_getPassStyleForString:(id)arg1;
- (id)_extractRelevantSemanticTagsFromPass:(id)arg1;

@end
