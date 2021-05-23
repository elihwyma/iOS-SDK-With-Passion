/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@protocol SSScreenshotAssetManagerBackend;

@interface SSScreenshotAssetManager : NSObject

{
    id <SSScreenshotAssetManagerBackend> _backend;
}

+ (id)sharedAssetManager;

- (id)backend;
- (void)setBackend:(id)arg1;
- (void)resetBackend;
- (void)registerImageForPersistable:(id)arg1 options:(id)arg2 withRegistrationBlock:(CDUnknownBlockType)arg3;
- (void)imageWithPreviouslyRegisteredIdentifier:(id)arg1 withAccessBlock:(CDUnknownBlockType)arg2;
- (void)recordEditsToPersistable:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)recordPersistableToTemporaryLocation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)removePersistable:(id)arg1 deleteOptions:(unsigned long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)recordEditsToPersistableForPDF:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end
