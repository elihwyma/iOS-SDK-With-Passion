/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@class IMChatTranscriptLayoutSpecification, NSArray, NSMutableArray;

@protocol IMChatTranscriptLayoutEngineDataSource;

@interface IMChatTranscriptLayoutEngine : NSObject

{
    NSMutableArray *_cachedDrawables;
    id <IMChatTranscriptLayoutEngineDataSource> _dataSource;
    IMChatTranscriptLayoutSpecification *_layoutSpecification;
    NSArray *_layoutAttributes;
    struct CGSize _contentSize;
}

@property (nonatomic) struct CGSize contentSize;
@property (copy, nonatomic) NSArray *layoutAttributes;
@property (weak, nonatomic) id <IMChatTranscriptLayoutEngineDataSource> dataSource;
@property (retain, nonatomic) IMChatTranscriptLayoutSpecification *layoutSpecification;

- (id)init;
- (void)invalidateLayout;
- (void)reloadData;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)_updateContentSize;
- (void)_invalidateCachedItemData;
- (unsigned long long)_numberOfTranscriptItems;
- (id)_cachedDrawableForTranscriptItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (double)_spaceForVerticalSpaceDescriptor:(long long)arg1;
- (void)_updateFrames;
- (void)_buildLayoutAttributesIfNeeded;
- (id)_makeDrawableForTranscriptItem:(id)arg1;
- (id)_cachedDrawableAtIndexOrNil:(unsigned long long)arg1;
- (id)drawableAtIndex:(unsigned long long)arg1;
- (void)removeItemsAtIndexPaths:(id)arg1 insertItemsAtIndexPaths:(id)arg2;

@end
