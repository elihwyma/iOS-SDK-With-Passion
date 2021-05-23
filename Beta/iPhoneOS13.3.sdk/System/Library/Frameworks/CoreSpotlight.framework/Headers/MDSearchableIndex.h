/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSSearchableIndex.h>

@interface MDSearchableIndex : CSSearchableIndex

+ (id)sharedInstance;

- (void)performIndexJob:(id)arg1 protectionClass:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)indexSearchableItems:(id)arg1 stateInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
