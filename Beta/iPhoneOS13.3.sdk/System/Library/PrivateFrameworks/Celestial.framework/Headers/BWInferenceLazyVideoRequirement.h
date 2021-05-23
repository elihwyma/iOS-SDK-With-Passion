/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWInferenceVideoRequirement.h>

#import <Celestial/Swift-Protocol.h>

@class NSString;

@interface BWInferenceLazyVideoRequirement : BWInferenceVideoRequirement <Swift>

{
    NSString *_preparedByAttachedMediaKey;
    CDUnknownBlockType _videoFormatProvider;
}

@property (copy, nonatomic, readonly) NSString *preparedByAttachedMediaKey;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttachedMediaKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 videoFormatProvider:(CDUnknownBlockType)arg3;
- (id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2;
- (id)initWithLazyVideoRequirement:(id)arg1;
- (id)initWithAttachedMediaKey:(id)arg1;
- (int)prepareForInputVideoFormat:(id)arg1;

@end
