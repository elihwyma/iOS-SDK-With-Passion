/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSBagKeySet.h>

@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet

{
    NSMutableSet *_mutableKeys;
}

@property (retain, nonatomic) NSMutableSet *mutableKeys;

- (id)init;
- (id)keys;
- (void)unionBagKeySet:(id)arg1;
- (void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2;
- (void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;

@end
