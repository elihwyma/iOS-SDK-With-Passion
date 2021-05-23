/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWInferenceVideoRequirement.h>

#import <Celestial/Swift-Protocol.h>

@interface BWInferenceCloneVideoRequirement : BWInferenceVideoRequirement <Swift>

{
    BWInferenceVideoRequirement *_sourceVideoRequirement;
}

@property (nonatomic, readonly) BWInferenceVideoRequirement *sourceVideoRequirement;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)videoFormat;
- (id)initWithAttachedMediaKey:(id)arg1 sourceVideoRequirement:(id)arg2;
- (id)initWithCloneVideoRequirement:(id)arg1;

@end
