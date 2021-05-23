/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString, PGGraph, PGGraphHolidayNode;

@interface PGHolidayContextualRule : NSObject

{
    PGGraph *_graph;
    PGGraphHolidayNode *_holidayNode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithGraph:(id)arg1;
- (_Bool)canProvideContextualKeyAssetsWithOptions:(id)arg1;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 withOptions:(id)arg2 modelReader:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)highlightNodeMatchingYearHighlight:(id)arg1 withOptions:(id)arg2;

@end
