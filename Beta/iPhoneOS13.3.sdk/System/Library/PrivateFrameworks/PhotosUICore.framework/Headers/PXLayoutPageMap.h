/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable;

@interface PXLayoutPageMap : NSObject

{
    NSMapTable *_pageMap;
    NSArray *_sources;
    struct CGRect _contentRect;
}

- (id)description;
- (id)_screenPageForPoint:(struct CGPoint)arg1;
- (id)initWithSources:(id)arg1 contentRect:(struct CGRect)arg2;
- (id)sourcesFromRect:(struct CGRect)arg1;
- (void)_mapSources:(id)arg1;

@end
