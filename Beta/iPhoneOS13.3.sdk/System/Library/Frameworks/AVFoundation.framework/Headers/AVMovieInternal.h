/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetInspectorLoader, AVDispatchOnce, NSArray, NSData, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface AVMovieInternal : NSObject

{
    AVAssetInspectorLoader *loader;
    NSURL *URL;
    NSData *data;
    NSDictionary *initializationOptions;
    NSArray *tracks;
    AVDispatchOnce *makeTracksArrayOnce;
}

@end
