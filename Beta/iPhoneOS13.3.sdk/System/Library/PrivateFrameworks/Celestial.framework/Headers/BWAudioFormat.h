/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFormat.h>

@class NSDictionary;

@interface BWAudioFormat : BWFormat

{
    struct opaqueCMFormatDescription *_audioFormatDescription;
    NSDictionary *_avAudioSettings;
}

@property (readonly) struct opaqueCMFormatDescription *audioFormatDescription;
@property (readonly) NSDictionary *audioCompressionSBPOptions;

+ (void)initialize;
+ (id)formatWithAudioFormatDescription:(struct opaqueCMFormatDescription *)arg1;
+ (id)formatForAVAudioSettings:(id)arg1 inputFormat:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (unsigned int)mediaType;
- (struct opaqueCMFormatDescription *)formatDescription;
- (id)_initWithAudioFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (id)_initForAVAudioSettings:(id)arg1 inputFormat:(id)arg2;

@end
