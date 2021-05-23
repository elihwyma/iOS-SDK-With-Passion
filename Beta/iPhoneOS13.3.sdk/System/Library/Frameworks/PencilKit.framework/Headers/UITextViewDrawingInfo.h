/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

#import <PencilKit/Swift-Protocol.h>

@class NSString, PKTiledView, UILongPressGestureRecognizer, UITextView;

@protocol UITextViewDrawingDelegate;

@interface UITextViewDrawingInfo : NSObject <Swift>

{
    _Bool _addBottomPadding;
    _Bool _rulerEnabled;
    UITextView *_textView;
    PKTiledView *_tiledView;
    id <UITextViewDrawingDelegate> _delegate;
    UILongPressGestureRecognizer *_insertLongPressGestureRecognizer;
}

@property (weak, nonatomic) UITextView *textView;
@property (nonatomic) _Bool addBottomPadding;
@property (retain, nonatomic) PKTiledView *tiledView;
@property (weak, nonatomic) id <UITextViewDrawingDelegate> delegate;
@property (retain, nonatomic) UILongPressGestureRecognizer *insertLongPressGestureRecognizer;
@property (nonatomic) _Bool rulerEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)initForTextView:(id)arg1;

@end
