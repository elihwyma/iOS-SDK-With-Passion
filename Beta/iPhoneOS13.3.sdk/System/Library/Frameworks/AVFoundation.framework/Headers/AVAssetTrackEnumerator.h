/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSEnumerator.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetTrackEnumerator : NSEnumerator

{
    NSString *_mediaType;
    NSArray *_mediaCharacteristics;
    NSEnumerator *_enumerator;
}

+ (id)trackEnumeratorWithAsset:(id)arg1;

- (void)dealloc;
- (id)nextObject;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 mediaType:(id)arg2;
- (id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2;
- (void)setMediaType:(id)arg1;
- (void)setMediaCharacteristics:(id)arg1;

@end
