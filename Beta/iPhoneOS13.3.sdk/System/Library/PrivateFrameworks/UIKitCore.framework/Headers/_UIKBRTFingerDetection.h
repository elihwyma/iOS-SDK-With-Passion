/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIKBRTKeyboardTouchObserver.h>

@class NSMapTable, NSMutableDictionary, UIView, _UIKBRTFingerDetectionView, _UIKBRTFingerInfo;

__attribute__((visibility("hidden")))
@interface _UIKBRTFingerDetection : _UIKBRTKeyboardTouchObserver

{
    UIView *_feedbackParentView;
    _UIKBRTFingerDetectionView *_feedbackView;
    NSMapTable *_fingerFeedbackViewMap;
    NSMutableDictionary *_touches;
    _UIKBRTFingerInfo *_fakeLeftIndex;
    _UIKBRTFingerInfo *_fakeRightIndex;
}

@property (nonatomic) UIView *feedbackParentView;
@property (retain, nonatomic) _UIKBRTFingerDetectionView *feedbackView;
@property (retain, nonatomic) NSMapTable *fingerFeedbackViewMap;
@property (retain, nonatomic) NSMutableDictionary *touches;
@property (retain, nonatomic) _UIKBRTFingerInfo *fakeLeftIndex;
@property (retain, nonatomic) _UIKBRTFingerInfo *fakeRightIndex;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(_Bool)arg2;
- (void)addTouchLocation:(struct CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4;
- (void)moveTouchWithIdentifier:(id)arg1 toLocation:(struct CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4;
- (void)updateWithFCenter:(struct CGPoint)arg1 jCenter:(struct CGPoint)arg2 keySize:(struct CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5;
- (id)initWithParentView:(id)arg1;
- (id)fingerIdsRelatedToTouchWithIdentifier:(id)arg1 sinceTimestamp:(double)arg2 includeThumbs:(_Bool)arg3;
- (unsigned long long)fingerIdForTouchWithIdentifier:(id)arg1;
- (id)touchIdentifiersForFingerId:(unsigned long long)arg1;
- (struct CGPoint)touchLocationForFingerId:(unsigned long long)arg1;
- (void)_updateTouchInfoForFingerID:(unsigned long long)arg1;
- (void)_updateFingerFeedback;
- (_Bool)_linkTouchesInArray:(id)arg1 withIndexes:(id)arg2 opposingHandIndexes:(id)arg3 unassignedIndexes:(id)arg4 thumb:(id)arg5;
- (void)_updateTouchInfoFromOutsideInWithArray:(id)arg1 indexes:(id)arg2 newIdentityDict:(id)arg3 fakeIndex:(id)arg4;
- (void)_updateFingerFeedback:(id)arg1;

@end
