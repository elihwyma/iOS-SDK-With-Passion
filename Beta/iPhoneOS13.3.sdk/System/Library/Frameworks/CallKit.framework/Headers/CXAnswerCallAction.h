/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallAction.h>

@class NSDate;

@interface CXAnswerCallAction : CXCallAction

{
    _Bool _downgradeToAudio;
    NSDate *_dateConnected;
    struct CGSize _localPortraitAspectRatio;
    struct CGSize _localLandscapeAspectRatio;
}

@property (copy, nonatomic) NSDate *dateConnected;
@property (nonatomic) _Bool downgradeToAudio;

+ (_Bool)supportsSecureCoding;
+ (double)timeout;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)fulfill;
- (id)customDescription;
- (struct CGSize)localLandscapeAspectRatio;
- (struct CGSize)localPortraitAspectRatio;
- (void)setLocalLandscapeAspectRatio:(struct CGSize)arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)fulfillWithDateConnected:(id)arg1;
- (void)updateAsFulfilledWithDateConnected:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;

@end
