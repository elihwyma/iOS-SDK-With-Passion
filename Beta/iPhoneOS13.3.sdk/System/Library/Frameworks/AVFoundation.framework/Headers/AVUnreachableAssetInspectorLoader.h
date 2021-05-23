/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetInspectorLoader.h>

@class NSDictionary;

@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader

{
    int _figError;
    NSDictionary *_figErrorUserInfo;
    _Bool _statusOfValueForKeyReturnsLoaded;
}

- (void)dealloc;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (Class)_classForTrackInspectors;
- (id)initWithFigError:(int)arg1 userInfo:(id)arg2;
- (id)initForUnitTests;

@end
