/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADEmbeddedMediaFile.h>

__attribute__((visibility("hidden")))
@interface OADWavAudioFile : OADEmbeddedMediaFile

{
    float mDuration;
    _Bool mHasDuration;
}

@property (nonatomic) float duration;
@property (nonatomic) _Bool hasDuration;

- (_Bool)isAudioOnly;
- (void)setIsAudioOnly:(_Bool)arg1;

@end
