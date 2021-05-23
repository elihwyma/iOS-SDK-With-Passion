/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol PLHighlightItemClustererRule;

@interface PLHighlightItemClusterer : NSObject

{
    id <PLHighlightItemClustererRule> _rule;
}

@property (nonatomic, readonly) id <PLHighlightItemClustererRule> rule;

- (id)initWithRule:(id)arg1;
- (void)restoreExistingHighlightItemListsFromUpdatedHighlightItems:(id)arg1 deletedHighlightItems:(id)arg2 usingModelReader:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 restoreBlock:(CDUnknownBlockType)arg5;
- (id)processHighlightItems:(id)arg1 withRestoredHighlightItemLists:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

@end
