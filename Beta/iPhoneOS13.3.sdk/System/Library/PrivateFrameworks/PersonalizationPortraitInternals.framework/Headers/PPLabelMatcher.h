/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPLabelMatcher : NSObject

{
    struct NSDictionary *_map;
}

+ (id)sharedInstance;

- (id)init;
- (unsigned long long)matchFromLabel:(id)arg1 toLabel:(id)arg2;
- (struct NSDictionary *)_generateMap;

@end
