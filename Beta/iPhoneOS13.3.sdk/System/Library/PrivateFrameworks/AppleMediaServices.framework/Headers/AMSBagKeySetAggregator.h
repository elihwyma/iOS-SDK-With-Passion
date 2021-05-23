/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSBagKeySetAggregator : NSObject

{
    NSMutableDictionary *_bagKeySets;
}

@property (retain, nonatomic) NSMutableDictionary *bagKeySets;

- (id)init;
- (void)addBagKeySet:(id)arg1 forConsumer:(Class)arg2;
- (id)generateAggregatedBagKeySet;
- (_Bool)hasBagKeySetForConsumer:(Class)arg1;

@end
