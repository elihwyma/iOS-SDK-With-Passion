/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaLocationClusterPredicate : OKMediaClusterPredicate

{
    unsigned long long _type;
}

@property (readonly) unsigned long long type;

- (void)dealloc;
- (id)title;
- (id)initWithType:(unsigned long long)arg1;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (float)efficiencyForItems:(id)arg1;

@end
