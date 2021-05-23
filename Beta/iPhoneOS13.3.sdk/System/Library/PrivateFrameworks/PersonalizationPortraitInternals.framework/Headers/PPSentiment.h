/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class _PASLock, _PASNotificationToken;

@interface PPSentiment : NSObject

{
    float _weightBucketSize;
    float _intercept;
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (float)sentimentScoreForText:(id)arg1;
- (_Bool)_loadAssetData;
- (float)_idxToFloat:(unsigned long long)arg1;

@end
