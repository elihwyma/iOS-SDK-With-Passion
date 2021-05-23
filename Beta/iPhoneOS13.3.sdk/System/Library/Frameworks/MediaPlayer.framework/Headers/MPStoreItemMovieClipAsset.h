/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPStoreItemMovieClipAsset : NSObject

{
    NSDictionary *_lookupDictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) double duration;
@property (copy, nonatomic, readonly) NSString *flavor;
@property (copy, nonatomic, readonly) NSURL *hlsURL;
@property (copy, nonatomic, readonly) NSURL *url;

- (id)initWithLookupDictionary:(id)arg1;

@end
