/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIKBRTKeyboardTouchObserver.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSTimer, UIView, _UIKBRTDecayingObject, _UIKBRTDecayingOffset, _UIKBRTTouchHistory, _UIKBRTTouchHistoryInfo;

@protocol _UIKBRTTouchDriftingDelegate;

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchDrifting : _UIKBRTKeyboardTouchObserver

{
    _Bool _supportsDrifting;
    _Bool _leftDriftRemovingItems;
    _Bool _rightDriftRemovingItems;
    id <_UIKBRTTouchDriftingDelegate> _delegate;
    NSArray *_indexSearchOrder;
    NSMutableDictionary *_touches;
    _UIKBRTTouchHistory *_fHistory;
    _UIKBRTTouchHistory *_jHistory;
    _UIKBRTTouchHistory *_otherHistory;
    _UIKBRTDecayingObject *_enableLatchObj;
    _UIKBRTDecayingOffset *_leftHandDriftOffsetObj;
    _UIKBRTDecayingOffset *_leftHandFixedOffsetObj;
    _UIKBRTDecayingOffset *_rightHandDriftOffsetObj;
    _UIKBRTDecayingOffset *_rightHandFixedOffsetObj;
    _UIKBRTTouchHistoryInfo *_leftIndexFingerInfo;
    NSMutableSet *_leftDriftLockTouchIDs;
    _UIKBRTTouchHistoryInfo *_rightIndexFingerInfo;
    NSMutableSet *_rightDriftLockTouchIDs;
    UIView *_feedbackParentView;
    NSTimer *_feedbackTimer;
    UIView *_leftDriftFeedbackView;
    UIView *_rightDriftFeedbackView;
    UIView *_touchHistoryFeedbackView;
    NSMapTable *_touchHistoryViewMap;
    struct {
        double up;
        double down;
        double left;
        double right;
    } _touchError;
}

@property (retain, nonatomic) NSArray *indexSearchOrder;
@property (retain, nonatomic) NSMutableDictionary *touches;
@property (retain, nonatomic) _UIKBRTTouchHistory *fHistory;
@property (retain, nonatomic) _UIKBRTTouchHistory *jHistory;
@property (retain, nonatomic) _UIKBRTTouchHistory *otherHistory;
@property (nonatomic) CDStruct_d2b197d1 touchError;
@property (nonatomic) _Bool supportsDrifting;
@property (retain, nonatomic) _UIKBRTDecayingObject *enableLatchObj;
@property (retain, nonatomic) _UIKBRTDecayingOffset *leftHandDriftOffsetObj;
@property (retain, nonatomic) _UIKBRTDecayingOffset *leftHandFixedOffsetObj;
@property (retain, nonatomic) _UIKBRTDecayingOffset *rightHandDriftOffsetObj;
@property (retain, nonatomic) _UIKBRTDecayingOffset *rightHandFixedOffsetObj;
@property (retain, nonatomic) _UIKBRTTouchHistoryInfo *leftIndexFingerInfo;
@property (retain, nonatomic) NSMutableSet *leftDriftLockTouchIDs;
@property (nonatomic) _Bool leftDriftRemovingItems;
@property (retain, nonatomic) _UIKBRTTouchHistoryInfo *rightIndexFingerInfo;
@property (retain, nonatomic) NSMutableSet *rightDriftLockTouchIDs;
@property (nonatomic) _Bool rightDriftRemovingItems;
@property (weak, nonatomic) UIView *feedbackParentView;
@property (retain, nonatomic) NSTimer *feedbackTimer;
@property (retain, nonatomic) UIView *leftDriftFeedbackView;
@property (retain, nonatomic) UIView *rightDriftFeedbackView;
@property (retain, nonatomic) UIView *touchHistoryFeedbackView;
@property (retain, nonatomic) NSMapTable *touchHistoryViewMap;
@property (nonatomic) id <_UIKBRTTouchDriftingDelegate> delegate;
@property (nonatomic, readonly) struct CGPoint leftHandDriftOffset;
@property (nonatomic, readonly) struct CGPoint rightHandDriftOffset;

+ (_Bool)isEnabled;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(_Bool)arg2;
- (void)addTouchLocation:(struct CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4;
- (void)moveTouchWithIdentifier:(id)arg1 toLocation:(struct CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4;
- (void)updateWithFCenter:(struct CGPoint)arg1 jCenter:(struct CGPoint)arg2 keySize:(struct CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5;
- (id)initWithParentView:(id)arg1;
- (void)updateTouchWithIdentifier:(id)arg1 withTouchTime:(double)arg2 resultingError:(struct CGPoint)arg3 rowOffsetFromHomeRow:(long long)arg4;
- (void)ignoreTouchWithIdentifier:(id)arg1 withTouchTime:(double)arg2;
- (void)_resetFeedback;
- (void)_updateDriftWithTouchInfo:(id)arg1;
- (void)_updateHistory;
- (id)_touchDictWithFingerIds:(id)arg1;
- (void)_updateDriftForFingers:(id)arg1 leftHand:(_Bool)arg2 newestTouch:(id)arg3;
- (void)_updateDriftView;
- (struct CGPoint)_offsetForPoint:(struct CGPoint)arg1 fromPoint:(struct CGPoint)arg2;
- (struct CGPoint)_pinOffset:(struct CGPoint)arg1;
- (struct CGPoint)_pointFromPoint:(struct CGPoint)arg1 plusOffset:(struct CGPoint)arg2;
- (void)_updateDriftViewTimer:(id)arg1;

@end
