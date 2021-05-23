/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface VOSGestureCategory : NSObject

{
    NSArray *_gestures;
    NSString *_localizedCategoryName;
}

@property (retain, nonatomic) NSArray *gestures;
@property (retain, nonatomic) NSString *localizedCategoryName;

+ (id)oneFingerTaps;
+ (id)twoFingerTaps;
+ (id)threeFingerTaps;
+ (id)fourFingerTaps;
+ (id)fiveFingerTaps;
+ (id)oneFingerFlicks;
+ (id)twoFingerFlicks;
+ (id)threeFingerFlicks;
+ (id)fourFingerFlicks;
+ (id)twoFingerRotates;
+ (id)twoFingerScrubs;
+ (id)oneFingerTapAndHolds;
+ (id)twoFingerTapAndHolds;
+ (id)threeFingerTapAndHolds;
+ (id)threeFingerDoubleTapHoldAndFlicks;
+ (id)allCategories;
+ (_Bool)isFlickGesture:(id)arg1;
+ (_Bool)isTapGesture:(id)arg1;
+ (_Bool)isRotateGesture:(id)arg1;
+ (_Bool)isScrubGesture:(id)arg1;
+ (_Bool)isTapAndHoldGesture:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithGestures:(id)arg1 localizedCategoryName:(id)arg2;
- (_Bool)containsGesture:(id)arg1;

@end
