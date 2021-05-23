/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWInferenceMediaRequirement.h>

#import <Celestial/Swift-Protocol.h>

@class BWInferenceVideoFormat;

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <Swift>

{
    BWInferenceVideoFormat *_videoFormat;
}

@property (nonatomic, readonly) BWInferenceVideoFormat *videoFormat;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2;
- (id)initWithVideoRequirement:(id)arg1;
- (id)initWithAttachedMediaKey:(id)arg1;
- (_Bool)isSatisfiedByRequirement:(id)arg1;
- (unsigned long long)satisfactionHash;

@end
