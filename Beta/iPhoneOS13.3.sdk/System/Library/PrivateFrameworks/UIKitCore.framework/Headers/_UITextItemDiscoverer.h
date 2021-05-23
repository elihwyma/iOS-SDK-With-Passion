/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIView, _UIBoundingTextRectsSolver;

@protocol UICoordinateSpace, _UITextContent;

__attribute__((visibility("hidden")))
@interface _UITextItemDiscoverer : NSObject

{
    _UIBoundingTextRectsSolver *_rectSolver;
    UIView<_UITextContent> *_view;
}

@property (weak, nonatomic, readonly) UIView<_UITextContent> *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <UICoordinateSpace> textItemCoordinateSpace;

- (id)initWithView:(id)arg1;
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;
- (struct CGRect)_visibleBounds;
- (id)visibleTextRange;
- (id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2;
- (_Bool)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2;
- (id)_textReferenceView;

@end
