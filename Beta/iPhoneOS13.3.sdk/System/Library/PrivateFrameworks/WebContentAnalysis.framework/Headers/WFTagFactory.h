/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WFTagFactory : NSObject

{
    NSMutableDictionary *sharedTags;
}

+ (id)defaultFactory;
+ (id)tagsForWebpage:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)tagWithClass:(Class)arg1 webpage:(id)arg2;

@end
