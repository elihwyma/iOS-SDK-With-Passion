/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarAttributeEditorSection, AVTTransitionCoordinator, AVTUIEnvironment, NSString;

@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTIndexBasedTaskScheduler, AVTTaskScheduler;

@interface AVTAvatarAttributeEditorSectionController : NSObject

{
    long long _selectedIndex;
    id <AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate;
    AVTAvatarAttributeEditorSection *_section;
    AVTTransitionCoordinator *_transitionCoordinator;
    AVTUIEnvironment *_environment;
    id <AVTIndexBasedTaskScheduler> _thumbnailScheduler;
    id <AVTTaskScheduler> _renderingScheduler;
}

@property (retain, nonatomic) AVTAvatarAttributeEditorSection *section;
@property (retain, nonatomic) AVTTransitionCoordinator *transitionCoordinator;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) id <AVTIndexBasedTaskScheduler> thumbnailScheduler;
@property (nonatomic, readonly) id <AVTTaskScheduler> renderingScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate;
@property (nonatomic) long long selectedIndex;

+ (_Bool)supportsSelection;
+ (double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2;
+ (struct CGSize)cellSizeForSectionItem:(id)arg1 inSection:(id)arg2 fittingWidth:(double)arg3 environment:(id)arg4;
+ (struct UIEdgeInsets)edgeInsetsForSection:(id)arg1 fittingWidth:(double)arg2 environment:(id)arg3;

- (long long)numberOfItems;
- (unsigned long long)indexForItem:(id)arg1;
- (void)resetToDefaultState;
- (id)initWithThumbnailScheduler:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3;
- (void)updateWithSection:(id)arg1;
- (_Bool)evaluateDisplayCondition:(id)arg1;
- (id)viewForIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;
- (struct UIEdgeInsets)edgeInsetsFittingSize:(struct CGSize)arg1;
- (id)prefetchingSectionItemForIndex:(long long)arg1;
- (void)updateCell:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)cell:(id)arg1 willDisplayAtIndex:(long long)arg2;
- (void)invalidateLayoutForNewContainerSize:(struct CGSize)arg1;
- (void)didHighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)didUnhighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)didSelectItemAtIndex:(long long)arg1 cell:(id)arg2;

@end
