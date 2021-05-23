/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface WFImgArrayCache : NSObject

{
    NSMutableString *imageAlternativeDescriptions;
    long long numberOfUnknownSizedImages;
    long long numberOfKnownImagePixels;
}

+ (id)imgArrayCacheWithArray:(id)arg1;

- (void)dealloc;
- (id)initWithArray:(id)arg1;
- (long long)numberOfKnownImagePixels;
- (id)imageAlternativeDescriptions;
- (long long)numberOfUnknownSizedImages;

@end
