/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPMeCardCache : NSObject

+ (id)sharedInstance;

- (id)init;
- (id)_dateComponentsFromCachedDateComponents:(id)arg1;
- (id)_cachedDateComponentsFromDateComponents:(id)arg1;
- (id)loadMeCardCache;
- (_Bool)writeMeCardCache:(id)arg1;
- (_Bool)deleteMeCardCache;

@end
