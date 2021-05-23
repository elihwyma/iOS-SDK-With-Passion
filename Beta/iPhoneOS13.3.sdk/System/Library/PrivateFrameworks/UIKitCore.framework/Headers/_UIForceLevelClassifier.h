/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSObservationSource, NSString;

@protocol _UIForceLevelClassifierDelegate;

@interface _UIForceLevelClassifier : NSObject

{
    NSObservationSource *_progressTouchForceObservable;
    NSMutableDictionary *_cachedProgressObservables;
    NSArray *_delegateObservations;
    _Bool _respectsSystemGestureTouchFiltering;
    long long _currentForceLevel;
    id <_UIForceLevelClassifierDelegate> _delegate;
    double _currentTouchForceMultiplier;
}

@property (nonatomic) double currentTouchForceMultiplier;
@property (nonatomic) _Bool respectsSystemGestureTouchFiltering;
@property (weak, nonatomic) id <_UIForceLevelClassifierDelegate> delegate;
@property (nonatomic, readonly) long long currentForceLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)receiveObservedValue:(id)arg1;
- (void)reset;
- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (void)touchForceMultiplierDidChange;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
- (_Bool)wantsUnclampedForceValues;
- (id)observableForProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;
- (id)observableForProgressToForceLevel:(long long)arg1;
- (void)_notifyDelegateOfProgress:(double)arg1 toForceLevel:(long long)arg2;
- (void)setCurrentForceLevel:(long long)arg1;

@end
