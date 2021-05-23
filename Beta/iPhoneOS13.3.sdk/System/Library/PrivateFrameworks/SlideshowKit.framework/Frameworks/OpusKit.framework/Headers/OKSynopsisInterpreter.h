/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface OKSynopsisInterpreter : NSObject

{
    NSMutableDictionary *_objectCreators;
    NSMutableDictionary *_objectComparators;
    NSMutableArray *_guidelineItems;
    NSArray *_synopsis;
}

@property (retain, nonatomic) NSArray *synopsis;

- (void)dealloc;
- (id)objectViewsFromGuidelineSynopsisItems:(id)arg1;
- (id)objectViewFromGuidelineSynopsisItem:(id)arg1;
- (id)guidelineSynopsisItemFromObjectView:(id)arg1;
- (id)initWithSynopsis:(id)arg1;
- (_Bool)hasSynopsis;
- (id)allGuidelineSynopsisItems;
- (id)allObjectsFromGuidelineSynopsisItems;
- (void)registerCreatorForItemType:(unsigned long long)arg1 initBlock:(CDUnknownBlockType)arg2;
- (void)registerComparatorForItemType:(unsigned long long)arg1 compareBlock:(CDUnknownBlockType)arg2;
- (id)guidelineSynopsisItemsFromObjectViews:(id)arg1;

@end
