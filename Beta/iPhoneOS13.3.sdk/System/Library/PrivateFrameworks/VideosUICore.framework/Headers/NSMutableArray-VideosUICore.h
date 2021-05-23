/*
 Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (VideosUICore)

- (void)vui_addObjectIfNotNil:(id)arg1;
- (_Bool)vui_applyChangeSetIfAvailable:(id)arg1 destinationObjects:(id)arg2 replaceContentsOnNilChanges:(_Bool)arg3;
- (_Bool)vui_applyChangeSet:(id)arg1 destinationObjects:(id)arg2;
- (_Bool)vui_applyChangeSet:(id)arg1 destinationObjectsBlock:(CDUnknownBlockType)arg2 updateObjectBlock:(CDUnknownBlockType)arg3;
- (_Bool)vui_applyChangeSet:(id)arg1 destinationObjects:(id)arg2 updateObjectBlock:(CDUnknownBlockType)arg3;
- (void)_vui_applyUpdateChanges:(id)arg1 destinationObjectsBlock:(CDUnknownBlockType)arg2 updateObjectBlock:(CDUnknownBlockType)arg3;
- (_Bool)vui_applyChangeSet:(id)arg1 destinationObjectsBlock:(CDUnknownBlockType)arg2;
- (void)vui_addObjectsFromArrayIfNotNil:(id)arg1;

@end
