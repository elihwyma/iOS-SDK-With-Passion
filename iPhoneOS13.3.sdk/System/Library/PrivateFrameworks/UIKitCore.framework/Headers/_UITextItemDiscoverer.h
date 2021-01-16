//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITextItemDiscoverable-Protocol.h>

@class UIView, _UIBoundingTextRectsSolver;
@protocol UICoordinateSpace, _UITextContent;

__attribute__((visibility("hidden")))
@interface _UITextItemDiscoverer : NSObject <_UITextItemDiscoverable>
{
    _UIBoundingTextRectsSolver *_rectSolver;
    UIView<_UITextContent> *_view;
}

@property(readonly, nonatomic) __weak UIView<_UITextContent> *view; // @synthesize view=_view;
// - (void).cxx_destruct;
- (NSRange)NSRangeForTextRange:(id)arg1;
- (BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2;
- (id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2;
- (id)visibleTextRange;
- (CGRect)_visibleBounds;
- (id)_textReferenceView;
@property(readonly, nonatomic) id <UICoordinateSpace> textItemCoordinateSpace;
- (id)initWithView:(id)arg1;

@end
