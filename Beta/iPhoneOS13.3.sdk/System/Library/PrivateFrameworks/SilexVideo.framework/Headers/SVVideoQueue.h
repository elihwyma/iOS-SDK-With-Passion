/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

#import <SilexVideo/Swift-Protocol.h>

@class NSOrderedSet, NSString;

@protocol SVVideo;

@interface SVVideoQueue : NSObject <Swift>

{
    id <SVVideo> _video;
    NSOrderedSet *_videos;
}

@property (copy, nonatomic) NSOrderedSet *videos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <SVVideo> video;
@property (nonatomic, readonly) id <SVVideo> nextVideo;
@property (nonatomic, readonly) id <SVVideo> previousVideo;
@property (nonatomic, readonly) id <SVVideo> firstVideo;
@property (nonatomic, readonly) id <SVVideo> lastVideo;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)numberOfVideos;
- (id)initWithVideos:(id)arg1;
- (id)videoAfterVideo:(id)arg1;
- (id)videoBeforeVideo:(id)arg1;
- (id)diffWithQueue:(id)arg1;
- (id)nextVideoOfType:(unsigned long long)arg1;
- (id)previousVideoOfType:(unsigned long long)arg1;
- (id)videoAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfVideo:(id)arg1;

@end
