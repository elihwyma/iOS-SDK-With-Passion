/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaClusterPredicate.h>

@class NSString;

@interface OKMediaSearchClusterPredicate : OKMediaClusterPredicate

{
    NSString *_searchString;
    unsigned long long _type;
    unsigned long long _options;
}

- (void)dealloc;
- (id)title;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (float)efficiencyForItems:(id)arg1;
- (id)initWithString:(id)arg1 type:(unsigned long long)arg2 options:(unsigned long long)arg3;

@end
