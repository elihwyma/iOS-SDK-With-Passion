/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CADisplayLink, NSOperation, NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView : UIView

{
    UITextRange *_range;
    id _placeholder;
    _Bool _didHaveText;
    _Bool _willInsertResult;
    double _angle;
    double _diameter;
    CADisplayLink *_displayLink;
    double _startTime;
    double _shrinkStartTime;
    _Bool _shrinking;
    NSOperation *_afterShrinkCompletionInvocation;
}

@property (nonatomic) _Bool willInsertResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)activeInstance;
+ (long long)fallbackPlaceholderLength;
+ (double)diameterForLineHeight:(double)arg1;
+ (double)widthForLineHeight:(double)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (void)drawRect:(struct CGRect)arg1;
- (void)updatePosition;
- (void)startLandingIfNecessary;
- (void)stopLandingForError;
- (void)stopLanding;
- (double)fadeOutDuration;
- (void)clearRotation;
- (void)rotateBy:(double)arg1;
- (void)advanceLanding:(id)arg1;
- (void)startDisplayLinkIfNecessary;
- (void)hideCursor;
- (void)showCursor;
- (void)shrinkWithCompletion:(id)arg1;
- (void)errorShakeDidFinish;
- (_Bool)delegateWasEmpty;
- (_Bool)hasActivePlaceholder;

@end
