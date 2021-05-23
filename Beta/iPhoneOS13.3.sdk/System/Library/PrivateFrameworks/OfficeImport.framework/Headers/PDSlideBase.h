/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, OADBackground, OADTableStyle, PDAnimation, PDTransition;

__attribute__((visibility("hidden")))
@interface PDSlideBase : NSObject

{
    unsigned int mSlideId;
    NSString *mName;
    NSArray *mDrawables;
    OADBackground *mBackground;
    PDAnimation *mAnimation;
    PDTransition *mTransition;
    PDTransition *mPpt2011Transition;
    OADTableStyle *mDefaultTableStyle;
    unsigned int mIsHidden:1;
    unsigned int mIsDoneWithContent:1;
}

@property (nonatomic) unsigned int slideId;

+ (int)inheritedPlaceholderType:(int)arg1;

- (id)init;
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (_Bool)isHidden;
- (id)background;
- (void)setIsHidden:(_Bool)arg1;
- (id)animation;
- (id)transition;
- (void)setBackground:(id)arg1;
- (void)setTransition:(id)arg1;
- (id)colorMap;
- (id)placeholders;
- (id)colorScheme;
- (id)drawables;
- (id)styleMatrix;
- (id)defaultTheme;
- (id)fontScheme;
- (id)parentSlideBase;
- (void)removeUnnecessaryOverrides;
- (id)drawingTheme;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)doneWithContent;
- (id)defaultTableStyle;
- (void)setDefaultTableStyle:(id)arg1;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (void)setDrawables:(id)arg1;
- (void)addSlideNumberPlaceholder:(id)arg1;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)defaultTextListStyle;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(_Bool)arg3 overrideIndex:(_Bool)arg4;
- (id)inheritedTextStyleForPlaceholderType:(int)arg1;
- (void)setUpPropertyHierarchyForDrawable:(id)arg1;
- (void)setUpPropertyHierarchyForDrawablePreservingEffectiveValues:(id)arg1;
- (void)setDrawablesNoHierarchy:(id)arg1;
- (void)setUpDrawablePropertyHierarchy;
- (void)setPpt9AnimationDataForCacheItem:(id)arg1 order:(int)arg2 state:(id)arg3;
- (id)ppt2011Transition;
- (void)setPpt2011Transition:(id)arg1;
- (_Bool)hasPpt10Animations;
- (_Bool)hasPpt9Animations;
- (void)generatePpt9Animations:(id)arg1;

@end
