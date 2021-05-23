/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSOperation.h>

@class NSURL, PHAnimatedImage;

@interface _PHAnimatedImageLoadOperation : NSOperation

{
    long long _cacheStrategy;
    _Bool _useSharedImageDecoding;
    NSURL *_animatedImageURL;
    PHAnimatedImage *_animatedImage;
}

@property (retain) PHAnimatedImage *animatedImage;

+ (long long)nextRequestID;
+ (id)_requestIsolationQueue;
+ (id)_removeOperation:(long long)arg1;
+ (void)_registerOperation:(id)arg1 forRequestID:(long long)arg2;
+ (id)_animatedImageSharedLoadingQueue;
+ (id)_inq_animatedImageLoadingOperations;

- (void)main;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(_Bool)arg3;

@end
