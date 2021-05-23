/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUICollectionChangeSet;

__attribute__((visibility("hidden")))
@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject

{
    _Bool _localMediaItemsAvailableDidChange;
    VUICollectionChangeSet *_mediaItemEntityTypesChangeSet;
}

@property (nonatomic, readonly) VUICollectionChangeSet *mediaItemEntityTypesChangeSet;
@property (nonatomic, readonly) _Bool localMediaItemsAvailableDidChange;

- (id)init;
- (id)description;
- (id)initWithMediaItemEntityTypesChangeSet:(id)arg1 localMediaItemsAvailableDidChange:(_Bool)arg2;

@end
