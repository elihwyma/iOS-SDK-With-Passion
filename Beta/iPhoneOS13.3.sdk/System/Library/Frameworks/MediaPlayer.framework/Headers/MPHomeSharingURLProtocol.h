/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSURLProtocol.h>

@interface MPHomeSharingURLProtocol : NSURLProtocol

+ (void)initialize;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;

- (void)stopLoading;
- (void)startLoading;

@end
