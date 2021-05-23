/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@protocol PGHighlightItemEnrichmentRule;

@interface PGHighlightItemEnrichment : NSObject

{
    id <PGHighlightItemEnrichmentRule> _rule;
    NSDictionary *_contextualKeyAssetByHighlighItemUUID;
}

@property (nonatomic, readonly) id <PGHighlightItemEnrichmentRule> rule;
@property (nonatomic, readonly) NSDictionary *contextualKeyAssetByHighlighItemUUID;

- (id)initWithRule:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (void)enrichHighlightItemLists:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end
