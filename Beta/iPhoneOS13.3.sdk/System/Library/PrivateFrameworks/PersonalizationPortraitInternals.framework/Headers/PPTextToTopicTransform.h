/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString, _PASLock, _PASNotificationToken;

@interface PPTextToTopicTransform : NSObject

{
    _PASLock *_lock;
    NSString *_vocabularyPath;
    NSString *_weightsPath;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

@property (nonatomic, readonly) unsigned long long outputTopicCount;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)iterateTopicsForText:(id)arg1 threshold:(double)arg2 scoreAttenuationFactor:(double)arg3 block:(CDUnknownBlockType)arg4;
- (id)_initWithVocabulary:(id)arg1 weights:(id)arg2;
- (void)_updateFromAssetData;
- (id)_payloadForTopic:(unsigned int)arg1;

@end
