/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Foundation/NSObject.h>

@class SFAcousticFeature;

@interface SFVoiceAnalytics : NSObject

{
    SFAcousticFeature *_jitter;
    SFAcousticFeature *_shimmer;
    SFAcousticFeature *_pitch;
    SFAcousticFeature *_voicing;
}

@property (copy, nonatomic, readonly) SFAcousticFeature *jitter;
@property (copy, nonatomic, readonly) SFAcousticFeature *shimmer;
@property (copy, nonatomic, readonly) SFAcousticFeature *pitch;
@property (copy, nonatomic, readonly) SFAcousticFeature *voicing;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithJitter:(id)arg1 shimmer:(id)arg2 pitch:(id)arg3 voicing:(id)arg4;

@end
