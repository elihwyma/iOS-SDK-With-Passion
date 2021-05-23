/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarAttributeEditorState, AVTUIEnvironment, NSArray, NSMutableDictionary;

@protocol AVTTaskScheduler;

@interface AVTAvatarAttributeEditorDataSource : NSObject

{
    unsigned long long _currentCategoryIndex;
    AVTAvatarAttributeEditorState *_editorState;
    NSArray *_categories;
    NSMutableDictionary *_sectionControllers;
    AVTUIEnvironment *_environment;
    id <AVTTaskScheduler> _renderingScheduler;
}

@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSMutableDictionary *sectionControllers;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) id <AVTTaskScheduler> renderingScheduler;
@property (nonatomic) unsigned long long currentCategoryIndex;
@property (nonatomic, readonly) AVTAvatarAttributeEditorState *editorState;

+ (unsigned long long)indexForCurrentCategoryGivenPreferredIdentifier:(id)arg1 categories:(id)arg2;
+ (id)sectionControllerForSection:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3;

- (long long)numberOfCategories;
- (id)categoryAtIndex:(long long)arg1;
- (id)sectionControllerForSection:(id)arg1;
- (void)discardControllersForNonCurrentCategory;
- (id)sectionForIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2;
- (id)initWithCategories:(id)arg1 currentCategoryIdentifier:(id)arg2 renderingScheduler:(id)arg3 editorState:(id)arg4 environment:(id)arg5;
- (void)reloadWithCategories:(id)arg1 currentCategoryIndex:(unsigned long long)arg2;
- (id)namesForCategories;
- (long long)numberOfSectionsForCategoryAtIndex:(long long)arg1;
- (id)sectionControllerForSectionIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2;
- (long long)indexForSection:(id)arg1 inCategoryAtIndex:(long long)arg2;
- (id)indexesForSectionsExcludingSectionsWithIdentifiers:(id)arg1 inCategoryAtIndex:(long long)arg2;
- (id)indexesForSectionsPresentIn:(id)arg1 butNotIn:(id)arg2;
- (id)currentCategoryIdentifier;
- (_Bool)shouldDisplaySectionWithDisplayCondition:(id)arg1 inCategoryAtIndex:(unsigned long long)arg2;
- (_Bool)shouldDisplaySectionForCategory:(long long)arg1;

@end
