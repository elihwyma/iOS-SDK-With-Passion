/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@interface CPAggregateDictionary : NSObject

@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;

+ (id)sharedAggregateDictionary;

- (int)commit;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)clearScalarKey:(id)arg1;
- (void)setValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)clearDistributionKey:(id)arg1;
- (void)significantTimeChanged;
- (void)incrementKey:(id)arg1;
- (void)decrementKey:(id)arg1;
- (void)addValue:(long long)arg1 forKey:(id)arg2;
- (void)subtractValue:(long long)arg1 forKey:(id)arg2;
- (void)pushValue:(double)arg1 forKey:(id)arg2;

@end
