/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUICollectionChangeSet;

@interface VUIMediaEntityFetchResponseChanges : NSObject

{
    VUICollectionChangeSet *_mediaEntitiesChangeSet;
    VUICollectionChangeSet *_groupingChangeSet;
}

@property (retain, nonatomic) VUICollectionChangeSet *mediaEntitiesChangeSet;
@property (retain, nonatomic) VUICollectionChangeSet *groupingChangeSet;

- (id)init;
- (id)description;
- (id)initWithMediaEntitiesChangeSet:(id)arg1;

@end
