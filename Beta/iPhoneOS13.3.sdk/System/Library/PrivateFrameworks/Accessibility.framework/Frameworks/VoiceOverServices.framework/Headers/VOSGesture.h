/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VOSGesture : NSObject

{
    NSString *_rawValue;
}

@property (nonatomic, readonly) NSString *rawValue;
@property (nonatomic, readonly) NSString *localizedName;

+ (_Bool)supportsSecureCoding;
+ (id)OneFingerSingleTap;
+ (id)OneFingerDoubleTap;
+ (id)OneFingerTripleTap;
+ (id)OneFingerQuadrupleTap;
+ (id)TwoFingerSingleTap;
+ (id)TwoFingerDoubleTap;
+ (id)TwoFingerTripleTap;
+ (id)TwoFingerQuadrupleTap;
+ (id)ThreeFingerSingleTap;
+ (id)ThreeFingerDoubleTap;
+ (id)ThreeFingerTripleTap;
+ (id)ThreeFingerQuadrupleTap;
+ (id)FourFingerSingleTap;
+ (id)FourFingerDoubleTap;
+ (id)FourFingerTripleTap;
+ (id)FourFingerQuadrupleTap;
+ (id)FiveFingerSingleTap;
+ (id)FiveFingerDoubleTap;
+ (id)FiveFingerTripleTap;
+ (id)FiveFingerQuadrupleTap;
+ (id)OneFingerFlickLeft;
+ (id)OneFingerFlickRight;
+ (id)OneFingerFlickUp;
+ (id)OneFingerFlickDown;
+ (id)TwoFingerFlickLeft;
+ (id)TwoFingerFlickRight;
+ (id)TwoFingerFlickUp;
+ (id)TwoFingerFlickDown;
+ (id)ThreeFingerFlickLeft;
+ (id)ThreeFingerFlickRight;
+ (id)ThreeFingerFlickUp;
+ (id)ThreeFingerFlickDown;
+ (id)FourFingerFlickLeft;
+ (id)FourFingerFlickRight;
+ (id)FourFingerFlickUp;
+ (id)FourFingerFlickDown;
+ (id)TwoFingerRotateCounterclockwise;
+ (id)TwoFingerRotateClockwise;
+ (id)TwoFingerScrub;
+ (id)OneFingerSingleTapAndHold;
+ (id)OneFingerDoubleTapAndHold;
+ (id)TwoFingerSingleTapAndHold;
+ (id)TwoFingerDoubleTapAndHold;
+ (id)ThreeFingerSingleTapAndHold;
+ (id)ThreeFingerDoubleTapAndHold;
+ (id)ThreeFingerDoubleTapHoldAndFlickUp;
+ (id)ThreeFingerDoubleTapHoldAndFlickLeft;
+ (id)ThreeFingerDoubleTapHoldAndFlickDown;
+ (id)ThreeFingerDoubleTapHoldAndFlickRight;
+ (id)allGestures;
+ (id)_gesturesForFingerCount:(long long)arg1;
+ (id)Invalid;
+ (id)gestureWithStringValue:(id)arg1;
+ (id)horizontalMirrorGestureForGesture:(id)arg1;
+ (id)rtlGestureForGesture:(id)arg1;
+ (id)oneFingerGestures;
+ (id)twoFingerGestures;
+ (id)threeFingerGestures;
+ (id)fourFingerGestures;
+ (id)fiveFingerGestures;
+ (id)conflictingZoomGestures;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithRawValue:(id)arg1;

@end
