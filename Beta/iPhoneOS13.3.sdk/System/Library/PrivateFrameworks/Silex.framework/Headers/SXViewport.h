/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSHashTable, UIScrollView;

@interface SXViewport : NSObject

{
    _Bool _groupChanges;
    unsigned long long _appearState;
    long long _interfaceOrientation;
    NSHashTable *_dynamicBoundsListeners;
    NSHashTable *_boundsListeners;
    NSHashTable *_appearStateListeners;
    NSHashTable *_documentSizeListeners;
    NSHashTable *_contentFrameListeners;
    NSHashTable *_interfaceOrientationListeners;
    SXViewport *_viewportBeforeUpdates;
    UIScrollView *_view;
    struct CGSize _documentSize;
    struct CGRect _bounds;
    struct CGRect _dynamicBounds;
    struct CGRect _contentFrame;
}

@property (retain, nonatomic) NSHashTable *dynamicBoundsListeners;
@property (retain, nonatomic) NSHashTable *boundsListeners;
@property (retain, nonatomic) NSHashTable *appearStateListeners;
@property (retain, nonatomic) NSHashTable *documentSizeListeners;
@property (retain, nonatomic) NSHashTable *contentFrameListeners;
@property (retain, nonatomic) NSHashTable *interfaceOrientationListeners;
@property (retain, nonatomic) SXViewport *viewportBeforeUpdates;
@property (nonatomic) _Bool groupChanges;
@property (weak, nonatomic, readonly) UIScrollView *view;
@property (nonatomic) struct CGRect dynamicBounds;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) unsigned long long appearState;
@property (nonatomic) struct CGSize documentSize;
@property (nonatomic) struct CGRect contentFrame;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, readonly) _Bool isPopulated;

- (id)description;
- (void)reset;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (id)initWithView:(id)arg1;
- (void)beginUpdates;
- (void)endUpdates;
- (void)addViewportChangeListener:(id)arg1 forOptions:(unsigned long long)arg2;
- (struct CGRect)convertRectToViewportCoordinateSpace:(struct CGRect)arg1 fromView:(id)arg2;
- (void)removeViewportChangeListener:(id)arg1 forOptions:(unsigned long long)arg2;
- (void)dynamicBoundsDidChangeFromBounds:(struct CGRect)arg1;
- (void)boundsDidChangeFromBounds:(struct CGRect)arg1;
- (void)appearStateChangedFromState:(unsigned long long)arg1;
- (void)documentSizeDidChangeFromSize:(struct CGSize)arg1;
- (void)interfaceOrientationChangedFromOrientation:(long long)arg1;
- (void)contentFrameDidChangeFromFrame:(struct CGRect)arg1;
- (id)stringForAppearState:(unsigned long long)arg1;
- (id)stringFroInterfaceOrientation:(long long)arg1;
- (id)debugDescriptionForViewport:(id)arg1;
- (struct CGPoint)convertPointToViewportCoordinateSpace:(struct CGPoint)arg1 fromView:(id)arg2;

@end
