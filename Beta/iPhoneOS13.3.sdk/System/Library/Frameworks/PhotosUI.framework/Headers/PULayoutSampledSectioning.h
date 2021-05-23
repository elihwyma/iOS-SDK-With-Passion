/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PULayoutSectioning.h>

@class NSArray;

@interface PULayoutSampledSectioning : PULayoutSectioning

{
    _Bool _sectioningIsValid;
    _Bool _samplingIsValid;
    long long _numberOfRealSections;
    long long _numberOfVisualSections;
    NSArray *_realSectionIndexesForVisualSection;
    long long *_visualSectionForRealSection;
    long long *_numberOfItemsForRealSection;
    long long *_numberOfRealItemsForVisualSection;
    long long *_startIndexInVisualSectionForRealSection;
    id *_sectionSamplers;
    long long *_maximumNumberOfVisibleItemsForVisualSection;
    _Bool _hasSomeSampling;
    long long _lastHitRealSectionIndex;
    long long _lastHitVisualSectionIndex;
    long long _lastHitRangeIndex;
    _Bool _supportsSamplingAndSectionGrouping;
}

@property (nonatomic) _Bool supportsSamplingAndSectionGrouping;

- (id)init;
- (void)dealloc;
- (long long)visualSectionForRealSection:(long long)arg1;
- (long long)mainRealSectionForVisualSection:(long long)arg1;
- (void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)numberOfVisualItemsInVisualSection:(long long)arg1;
- (void)invalidateSampling;
- (_Bool)hasSomeSampling;
- (void)invalidateSections;
- (long long)numberOfRealItemsInVisualSection:(long long)arg1;
- (struct PUSimpleIndexPath)mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath)arg1;
- (struct PUSimpleIndexPath)visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath)arg1 isMainItem:(_Bool *)arg2;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1;
- (long long)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath)arg1;
- (void)_discardSamplingCache;
- (void)_discardSectioningCache;
- (void)_cacheSectioningIfNeeded;
- (id)_sectionSamplerForVisualSection:(long long)arg1;
- (long long)_visualItemIndexForUnsampledItemIndex:(long long)arg1 visualSection:(long long)arg2 isMainItem:(_Bool *)arg3;
- (long long)_unsampledItemIndexForVisualItemIndex:(long long)arg1 visualSection:(long long)arg2;
- (struct PUSimpleIndexPath)_mainRealItemIndexPathForVisualSection:(long long)arg1 andUnsampledItemIndex:(long long)arg2;

@end
