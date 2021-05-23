/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIPDFPageView;

__attribute__((visibility("hidden")))
@interface UIPDFPlacementController : NSObject

{
    NSMutableArray *_popups;
    struct CGSize _viewSize;
    UIPDFPageView *pageView;
}

@property (nonatomic) UIPDFPageView *pageView;

- (void)dealloc;
- (id)viewAtIndex:(unsigned long long)arg1;
- (id)initWithAnnotations:(id)arg1 viewSize:(struct CGSize)arg2;
- (void)layoutViews:(double)arg1;
- (struct CGRect)boundsForObjectAtIndex:(unsigned long long)arg1;
- (double)yForObjectAtIndex:(unsigned long long)arg1;
- (void)shift:(double)arg1;

@end
