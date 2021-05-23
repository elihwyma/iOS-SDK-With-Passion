/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIGestureRecognizer.h>

@protocol WKTouchActionGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface WKTouchActionGestureRecognizer : UIGestureRecognizer

{
    struct HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction>>> _touchActionsByTouchIdentifier;
    id <WKTouchActionGestureRecognizerDelegate> _touchActionDelegate;
}

- (id).cxx_construct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)_updateState;
- (id)initWithTouchActionDelegate:(id)arg1;
- (void)setTouchActions:(OptionSet_6c8dcb60)arg1 forTouchIdentifier:(unsigned int)arg2;
- (void)clearTouchActionsForTouchIdentifier:(unsigned int)arg1;

@end
