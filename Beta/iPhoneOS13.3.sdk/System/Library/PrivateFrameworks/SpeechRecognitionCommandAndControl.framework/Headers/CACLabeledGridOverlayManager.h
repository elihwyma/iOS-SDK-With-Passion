/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>

@class NSArray, NSMutableArray;

@protocol CACLabeledGridOverlayManagerDelegate;

@interface CACLabeledGridOverlayManager : CACSimpleContentViewManager

{
    NSMutableArray *_labeledElements;
    long long _currentLevel;
    struct CGRect _currentGridPortraitUpFrame;
    _Bool _needsToBeRedrawn;
    id <CACLabeledGridOverlayManagerDelegate> _delegate;
    long long _currentNumberOfColumns;
    long long _currentNumberOfRows;
}

@property long long currentLevel;
@property (retain) NSArray *labeledElements;
@property (weak, nonatomic) id <CACLabeledGridOverlayManagerDelegate> delegate;
@property (nonatomic) _Bool needsToBeRedrawn;
@property long long currentNumberOfColumns;
@property long long currentNumberOfRows;
@property (nonatomic, readonly) struct CGPoint portraitUpCenterPoint;

+ (unsigned long long)maxNumberOfRowsForDevice;
+ (unsigned long long)maxNumberOfColumnsForDevice;

- (void)resetIdleTimer;
- (_Bool)isOverlay;
- (void)showOverlay;
- (void)hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetAndDrawAtTopLevel;
- (_Bool)updateOverlayWithPortraitUpRect:(struct CGRect)arg1;
- (void)startDelayedDimmingOfNumbers;
- (_Bool)_isNextLevelAvailable;
- (void)stopDelayedDimmingOfNumbers;
- (struct CGRect)bestDrilledGridRectForPortraitUpRect:(struct CGRect)arg1;
- (void)_generateLabeledElementsForPortraitUpRect:(struct CGRect)arg1;
- (struct CGSize)bestGridResolutionForPortraitUpRect:(struct CGRect)arg1;
- (_Bool)shouldZoom;

@end
