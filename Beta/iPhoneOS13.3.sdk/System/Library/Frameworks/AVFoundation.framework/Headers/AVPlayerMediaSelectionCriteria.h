/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVPlayerMediaSelectionCriteria : NSObject

{
    void *_criteriaInternal;
}

@property (nonatomic, readonly) NSArray *preferredLanguages;
@property (nonatomic, readonly) NSArray *preferredMediaCharacteristics;
@property (nonatomic, readonly) NSArray *principalMediaCharacteristics;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)figDictionary;
- (id)initWithFigDictionary:(id)arg1;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4;
- (id)preferredMediaSubTypes;
- (id)precludedMediaSubTypes;
- (_Bool)preferMultichannelAudio;
- (_Bool)precludeMultichannelAudio;
- (id)initWithPrincipalMediaCharacteristics:(id)arg1 preferredLanguages:(id)arg2 preferredMediaCharacteristics:(id)arg3;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(_Bool)arg5 precludeMultichannelAudio:(_Bool)arg6;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 fallbackPreferredLanguages:(id)arg3 fallbackPreferredMediaCharacteristics:(id)arg4 captionDisplayType:(long long)arg5;

@end
