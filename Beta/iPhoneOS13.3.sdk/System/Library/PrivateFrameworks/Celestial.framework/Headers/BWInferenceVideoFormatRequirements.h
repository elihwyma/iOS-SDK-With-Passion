/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWVideoFormatRequirements.h>

@interface BWInferenceVideoFormatRequirements : BWVideoFormatRequirements

{
    _Bool _deviceOriented;
    long long _videoContentMode;
    _Bool _includesInvalidContent;
}

@property (nonatomic) _Bool deviceOriented;
@property (nonatomic) long long videoContentMode;
@property (nonatomic) _Bool includesInvalidContent;

+ (id)defaultEspressoFormatRequirementsWithWidth:(long long)arg1 height:(long long)arg2;

- (id)initWithFormat:(id)arg1;

@end
