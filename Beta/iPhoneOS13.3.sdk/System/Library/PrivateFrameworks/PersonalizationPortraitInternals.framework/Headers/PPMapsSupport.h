/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPMapsSupport : NSObject

+ (id)favoritesContainer;
+ (void)importMapsData;
+ (void)_clearMapsFavorites;
+ (_Bool)harvestMapItem:(id)arg1 documentIdentifier:(id)arg2 groupIdentifier:(id)arg3 includingPostalAddress:(_Bool)arg4 error:(id *)arg5;

@end
