/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class UIButton;

@protocol CKInlineAudioReplyButtonDelegate;

__attribute__((visibility("hidden")))
@interface CKInlineAudioReplyButtonController : NSObject

{
    _Bool _started;
    id <CKInlineAudioReplyButtonDelegate> _delegate;
    UIButton *_startButton;
    UIButton *_stopButton;
    double _holdThreshold;
    double _touchDownTime;
}

@property (retain, nonatomic) UIButton *startButton;
@property (retain, nonatomic) UIButton *stopButton;
@property (nonatomic) double holdThreshold;
@property (nonatomic) double touchDownTime;
@property (nonatomic, getter=isStarted) _Bool started;
@property (weak, nonatomic) id <CKInlineAudioReplyButtonDelegate> delegate;

- (void)dealloc;
- (id)initWithStartButton:(id)arg1 stopButton:(id)arg2;
- (void)touchDownInStartButton:(id)arg1 event:(id)arg2;
- (void)touchUpInStartButton:(id)arg1 event:(id)arg2;
- (void)touchUpOutsideStartButton:(id)arg1 event:(id)arg2;
- (void)touchUpInStopButton:(id)arg1;
- (void)touchDragEnter:(id)arg1;
- (void)touchDragExit:(id)arg1;

@end
