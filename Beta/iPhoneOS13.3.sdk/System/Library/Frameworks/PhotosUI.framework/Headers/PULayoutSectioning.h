/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@protocol PULayoutSectioningDelegate;

@interface PULayoutSectioning : NSObject

{
    _Bool _invalidatingSampling;
    _Bool _invalidatingSections;
    PULayoutSectioning *_baseSectioning;
    id <PULayoutSectioningDelegate> _delegate;
}

@property (nonatomic) id <PULayoutSectioningDelegate> delegate;
@property (retain, nonatomic) PULayoutSectioning *baseSectioning;

- (void)dealloc;
- (id)description;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (long long)visualSectionForRealSection:(long long)arg1;
- (long long)mainRealSectionForVisualSection:(long long)arg1;
- (void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)numberOfVisualItemsInVisualSection:(long long)arg1;
- (void)_baseSectioningDidInvalidateSampling:(id)arg1;
- (void)invalidateSampling;
- (_Bool)hasSomeSampling;
- (void)_baseSectioningDidInvalidateSections:(id)arg1;
- (void)invalidateSections;
- (long long)numberOfRealItemsInVisualSection:(long long)arg1;
- (struct PUSimpleIndexPath)mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath)arg1;
- (struct PUSimpleIndexPath)visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath)arg1 isMainItem:(_Bool *)arg2;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1;
- (long long)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath)arg1;
- (id)_sectioningDescriptionShowInvisibleItemsInBaseSectioning:(_Bool)arg1 hasIncorrectSampling:(_Bool *)arg2 hasInvisibleItemsInBaseSectioning:(_Bool *)arg3;
- (id)sectioningDescription;
- (id)sectioningHashHasIncorrectSampling:(_Bool *)arg1 hasInvisibleItemsInBaseSectioning:(_Bool *)arg2;
- (id)sectioningHash;

@end
