/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@protocol ICAnalyticsReporterAccessibilityDelegate;

@interface ICAnalyticsReporterBase : NSObject

{
    id <ICAnalyticsReporterAccessibilityDelegate> _accessibilityDelegate;
}

@property (weak, nonatomic) id <ICAnalyticsReporterAccessibilityDelegate> accessibilityDelegate;

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
- (id)whitelistedSubkeysForAccessibilityForKey:(id)arg1;
- (_Bool)shouldLogKeyForAccessibility:(id)arg1 withSignature:(id)arg2;
- (id)instrumentationAXKeyForKey:(id)arg1;
- (id)keyForCurrentlyActiveAssistiveTechnology;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2 withSignature:(id)arg3;

@end
