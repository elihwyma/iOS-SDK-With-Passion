/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <Swift>

{
    _Bool _needsRecalc;
    UIPrintPageRenderer *_printPageRenderer;
    double _maximumContentHeight;
    double _maximumContentWidth;
    long long _startPage;
    long long _pageCount;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _perPageContentInsets;
}

@property (weak, nonatomic) UIPrintPageRenderer *printPageRenderer;
@property (nonatomic) double maximumContentHeight;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) struct UIEdgeInsets perPageContentInsets;
@property (nonatomic) long long startPage;
@property (nonatomic, readonly) long long pageCount;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setNeedsRecalc;
- (void)removeFromPrintPageRenderer;
- (struct CGRect)_pageContentRect:(_Bool)arg1;
- (void)_recalcIfNecessary;
- (long long)_recalcPageCount;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;

@end
