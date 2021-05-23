/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@class BMBehaviorStorage;

@interface BMBehaviorRetriever : NSObject

{
    BMBehaviorStorage *_storage;
}

@property (retain, nonatomic) BMBehaviorStorage *storage;

- (id)init;
- (id)initWithURL:(id)arg1;
- (id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3;
- (id)retrieveRulesWithFilters:(id)arg1;
- (id)retrieveRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id *)arg4;

@end
