/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMFall : NSObject

+ (_Bool)areStatsAvailable;

- (_Bool)setStatsEnabled:(_Bool)arg1;
- (unsigned long long)setDataCollectionConfiguration:(unsigned long long)arg1;
- (id)fallConfig;
- (id)sendStatsDataToUrl:(id)arg1;
- (void)sendStatsDataToUrl:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)simulateEvent:(unsigned long long)arg1;

@end
