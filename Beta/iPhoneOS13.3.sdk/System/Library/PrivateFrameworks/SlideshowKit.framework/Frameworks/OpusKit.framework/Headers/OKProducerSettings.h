/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSArray, OKMediaFeeder, OKProducerPreset;

@interface OKProducerSettings : NSObject

{
    NSArray *_guidelines;
    OKMediaFeeder *_mediaFeeder;
    NSArray *_audioURLs;
    OKProducerPreset *_preset;
}

@property (retain) OKProducerPreset *preset;
@property (retain) NSArray *guidelines;
@property (retain) OKMediaFeeder *mediaFeeder;
@property (retain) NSArray *audioURLs;

- (void)dealloc;

@end
