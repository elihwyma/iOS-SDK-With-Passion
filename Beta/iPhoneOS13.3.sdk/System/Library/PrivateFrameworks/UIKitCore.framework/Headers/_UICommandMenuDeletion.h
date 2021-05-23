/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UICommandChange.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICommandMenuDeletion : _UICommandChange

@property (nonatomic, readonly) NSString *anchor;

+ (id)deletionWithAnchor:(id)arg1;

- (id)initWithAnchor:(id)arg1;
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;
- (_Bool)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;

@end
