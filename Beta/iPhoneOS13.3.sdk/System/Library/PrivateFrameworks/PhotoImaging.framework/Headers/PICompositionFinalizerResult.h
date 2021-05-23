/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NUComposition;

@interface PICompositionFinalizerResult : NSObject

{
    long long _disposition;
    NUComposition *_composition;
}

@property (readonly) long long disposition;
@property (copy, readonly) NUComposition *composition;

- (id)initWithDisposition:(long long)arg1 composition:(id)arg2;

@end
