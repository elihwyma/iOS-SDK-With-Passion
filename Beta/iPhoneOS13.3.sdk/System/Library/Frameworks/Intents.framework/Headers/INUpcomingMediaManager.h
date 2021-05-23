/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class CSSearchableIndex;

@interface INUpcomingMediaManager : NSObject

{
    CSSearchableIndex *_index;
}

@property (nonatomic, readonly) CSSearchableIndex *index;

+ (id)sharedManager;
+ (id)mediaQueue;

- (id)initWithSearchableIndex:(id)arg1;
- (void)setSuggestedMediaIntents:(id)arg1;
- (void)_setSuggestedMediaIntents:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_replaceMediaIntents:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setPredictionMode:(long long)arg1 forType:(long long)arg2;
- (long long)_predictionModeForBundleId:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (id)keyWithMediaItemTypeName:(id)arg1 bundleId:(id)arg2;

@end
