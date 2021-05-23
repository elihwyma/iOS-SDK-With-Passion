/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CALayer, UIPDFDocument, UIPDFPageView;

__attribute__((visibility("hidden")))
@interface UIPDFPageContentDelegate : NSObject

{
    UIPDFDocument *_document;
    unsigned long long _pageIndex;
    UIPDFPageView *_view;
    struct CGRect _bounds;
    struct CGAffineTransform _transform;
    struct CGColor *_white;
    struct CGColor *_highlightColor;
    CALayer *_owner;
    struct CGRect _box;
    unsigned long long _pageRotation;
    struct os_unfair_lock_s _lock;
    unsigned long long _threadCount;
    _Bool _isCancelled;
}

@property (retain) UIPDFDocument *document;
@property unsigned long long pageIndex;
@property UIPDFPageView *view;
@property CALayer *owner;
@property struct CGRect box;
@property unsigned long long pageRotation;
@property struct CGColor *highlightColor;
@property (readonly) struct CGAffineTransform transform;
@property _Bool isCancelled;

- (id)init;
- (void)dealloc;
- (void)computeTransform;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)pageHasSelection;
- (void)drawSelectionLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSelectionLayerBlockMode:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)addRect:(struct CGRect)arg1 toPath:(struct CGPath *)arg2 transform:(struct CGAffineTransform *)arg3 view:(id)arg4 owner:(id)arg5;

@end
