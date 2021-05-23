/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PXTilingControllerDebugInfo : NSObject

{
    NSArray *_preheatRects;
    NSArray *_pagedItems;
    NSArray *_preheatedItems;
    NSArray *_activeItems;
    struct CGRect _visibleRect;
    struct CGRect _activeRect;
    struct CGRect _pagedRect;
    struct CGRect _cachedRect;
    struct CGRect _contentBounds;
}

@property (nonatomic) struct CGRect activeRect;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic) struct CGRect pagedRect;
@property (nonatomic) struct CGRect cachedRect;
@property (nonatomic) struct CGRect contentBounds;
@property (retain, nonatomic) NSArray *preheatRects;
@property (retain, nonatomic) NSArray *pagedItems;
@property (retain, nonatomic) NSArray *preheatedItems;
@property (retain, nonatomic) NSArray *activeItems;

- (id)debugQuickLookObject;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;

@end
