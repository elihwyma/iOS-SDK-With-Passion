/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPConnectionsUtils : NSObject

+ (id)supportedLocationSemanticTypes;
+ (_Bool)isClientAuthorizedForSemanticTriggers:(id)arg1;
+ (_Bool)isValidLinguisticQuery:(id)arg1;
+ (_Bool)shouldAggregateLabel:(id)arg1 withValue:(id)arg2 query:(id)arg3;
+ (id)triggerTypeFromQuery:(id)arg1;
+ (unsigned char)locationFieldFromSemanticTag:(unsigned char)arg1;
+ (id)safariBundleIdentifier;
+ (id)siriBundleIdentifier;
+ (id)calendarUserActivityIdentifier;
+ (id)calendarUserActivityExternalIDKey;
+ (id)calendarBundleIdentifier;
+ (id)mapsBundleIdentifier;
+ (id)springboardBundleIdentifier;

@end
