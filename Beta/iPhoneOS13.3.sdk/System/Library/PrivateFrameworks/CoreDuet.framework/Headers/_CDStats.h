/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _CDStats : NSObject

+ (id)sharedInstance;
+ (id)hardwareModel;
+ (id)familyNames;

- (id)init;
- (id)string;
- (void)dealloc;
- (id)dictionary;
- (void)addToStatsPrinter:(id)arg1 perfMetricFamily:(id)arg2;
- (void)addToDictionary:(id)arg1 perfMetricFamily:(id)arg2;
- (void)addToDictionary:(id)arg1 perfMetric:(id)arg2;

@end
