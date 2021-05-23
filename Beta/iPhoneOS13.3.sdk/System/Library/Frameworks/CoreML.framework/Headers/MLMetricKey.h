/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLKey.h>

@interface MLMetricKey : MLKey

+ (id)lossValue;
+ (id)epochIndex;
+ (id)miniBatchIndex;

- (id)initWithKeyName:(id)arg1;

@end
