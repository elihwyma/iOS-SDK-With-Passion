/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaDateClusterPredicate : OKMediaClusterPredicate

{
    unsigned long long _type;
}

@property (readonly) unsigned long long type;

- (void)dealloc;
- (id)title;
- (id)initWithType:(unsigned long long)arg1;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (float)efficiencyForItems:(id)arg1;
- (unsigned long long)timeOfDay:(id)arg1;
- (id)timeOfDayAsString:(unsigned long long)arg1;
- (long long)hourInGMT:(id)arg1;

@end
