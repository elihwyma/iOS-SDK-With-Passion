/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWInferenceDataRequirement.h>

#import <Celestial/Swift-Protocol.h>

@class NSString;

@interface BWInferenceMediaRequirement : BWInferenceDataRequirement <Swift>

{
    NSString *_attachedMediaKey;
}

@property (copy, nonatomic, readonly) NSString *attachedMediaKey;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttachedMediaKey:(id)arg1;
- (id)initWithMediaRequirement:(id)arg1;

@end
