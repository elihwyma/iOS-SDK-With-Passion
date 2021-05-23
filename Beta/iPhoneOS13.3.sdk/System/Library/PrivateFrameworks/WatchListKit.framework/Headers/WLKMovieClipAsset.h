/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLKMovieClipAsset : NSObject

{
    unsigned long long _duration;
    NSString *_flavor;
    NSString *_url;
}

@property (nonatomic, readonly) unsigned long long duration;
@property (copy, nonatomic, readonly) NSString *durationString;
@property (copy, nonatomic, readonly) NSString *flavor;
@property (copy, nonatomic, readonly) NSString *url;

+ (id)movieClipAssetsWithArray:(id)arg1;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)_init;

@end
