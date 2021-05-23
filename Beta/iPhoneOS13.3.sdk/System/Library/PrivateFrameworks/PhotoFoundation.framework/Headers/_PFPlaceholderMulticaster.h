/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFMulticaster.h>

@interface _PFPlaceholderMulticaster : PFMulticaster

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (Class)placeholderSubclassOfClass:(Class)arg1 named:(id)arg2;
+ (void)convertToConcreteMulticaster:(id)arg1 forReceiver:(id)arg2;
+ (_Bool)tryConvertToConcreteMulticaster:(id)arg1;

- (void)addReceiver:(id)arg1;
- (void)addWeakReceiver:(id)arg1;
- (void)__ignore;

@end
