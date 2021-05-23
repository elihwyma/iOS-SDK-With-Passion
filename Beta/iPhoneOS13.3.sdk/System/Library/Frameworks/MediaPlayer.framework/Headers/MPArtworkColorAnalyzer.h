/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface MPArtworkColorAnalyzer : NSObject

{
    long long _algorithm;
    UIImage *_image;
}

@property (nonatomic, readonly) long long algorithm;
@property (nonatomic, readonly) UIImage *image;

- (id)initWithImage:(id)arg1 algorithm:(long long)arg2;
- (void)analyzeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_fallbackColorAnalysis;

@end
