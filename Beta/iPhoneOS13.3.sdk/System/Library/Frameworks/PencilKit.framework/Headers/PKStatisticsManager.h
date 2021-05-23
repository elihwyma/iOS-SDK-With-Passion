/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@interface PKStatisticsManager : NSObject

+ (id)sharedStatisticsManager;

- (void)pushValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)incrementValueForKey:(id)arg1;
- (void)didAddStroke:(id)arg1;
- (void)didUseObjectEraser;
- (id)_statisticsKeyWithParameters:(id)arg1;
- (_Bool)_statisticsEnabled;
- (double)_valueForIdentifier:(id)arg1;
- (id)_opacityKeyForIdentifier:(id)arg1;
- (id)_thicknessKeyForIdentifier:(id)arg1;

@end
