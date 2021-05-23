/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@protocol DCAnalyticsReporterAccessibilityDelegate;

@interface DCAnalyticsReporterBase : NSObject

{
    id <DCAnalyticsReporterAccessibilityDelegate> _accessibilityDelegate;
}

@property (weak, nonatomic) id <DCAnalyticsReporterAccessibilityDelegate> accessibilityDelegate;

+ (id)instrumentationKeyForKey:(id)arg1;
+ (long long)roundIntegerValue:(long long)arg1;
+ (double)roundDoubleValue:(double)arg1;

- (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)addValue:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2;
- (id)instrumentationKeyForKey:(id)arg1;
- (void)addAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3;
- (void)setAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2;
- (id)whitelistedKeysForAccessibility;
- (_Bool)shouldLogKeyForAccessibility:(id)arg1 withSignature:(id)arg2;
- (id)instrumentationAXKeyForKey:(id)arg1;
- (id)keyForCurrentlyActiveAssistiveTechnology;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2 withSignature:(id)arg3;

@end
