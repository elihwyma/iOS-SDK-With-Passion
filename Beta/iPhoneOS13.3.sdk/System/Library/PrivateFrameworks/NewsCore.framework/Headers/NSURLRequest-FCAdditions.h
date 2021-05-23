/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSURLRequest.h>

@interface NSURLRequest (FCAdditions)

+ (id)overrideUserAgent;
+ (id)frRequestWithURL:(id)arg1;
+ (id)frRequestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
+ (void)setupFeldsparUserAgent;

@end
