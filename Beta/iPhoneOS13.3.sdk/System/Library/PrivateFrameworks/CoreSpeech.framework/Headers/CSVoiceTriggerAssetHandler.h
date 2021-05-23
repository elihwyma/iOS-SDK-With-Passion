/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAssetHandler : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedHandler;

- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)notifyObservers:(id)arg1;
- (void)getVoiceTriggerAsset:(CDUnknownBlockType)arg1;
- (id)defaultFallbackModelIfNil:(id)arg1;

@end
