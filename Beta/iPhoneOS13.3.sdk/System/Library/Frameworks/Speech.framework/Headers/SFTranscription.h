/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SFTranscription : NSObject

{
    NSString *_formattedString;
    NSArray *_segments;
    double _speakingRate;
    double _averagePauseDuration;
}

@property (copy, nonatomic, readonly) NSString *formattedString;
@property (copy, nonatomic, readonly) NSArray *segments;
@property (nonatomic, readonly) double speakingRate;
@property (nonatomic, readonly) double averagePauseDuration;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithSegments:(id)arg1 formattedString:(id)arg2 speakingRate:(double)arg3 averagePauseDuration:(double)arg4;

@end
