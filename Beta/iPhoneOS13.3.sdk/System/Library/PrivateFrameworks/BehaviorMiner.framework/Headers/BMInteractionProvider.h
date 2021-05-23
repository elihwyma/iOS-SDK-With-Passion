/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@class _CDInteractionStore;

@interface BMInteractionProvider : NSObject

{
    _CDInteractionStore *_interactionStore;
}

@property (nonatomic, readonly) _CDInteractionStore *interactionStore;

- (id)init;
- (id)initWithInteractionStore:(id)arg1;
- (id)interactionEventsForTypes:(id)arg1 error:(id *)arg2;
- (id)batchFetchedPhotoSuggestionsForInteractions:(id)arg1;

@end
