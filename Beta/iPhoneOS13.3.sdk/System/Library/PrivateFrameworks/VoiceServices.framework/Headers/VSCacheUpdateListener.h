/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock, NSMutableArray, NSTimer;

@interface VSCacheUpdateListener : NSObject

{
    NSLock *_lock;
    NSMutableArray *_updateRequestQueue;
    NSDictionary *_dataProviders;
    NSTimer *_flushTimer;
    _Bool _isListening;
}

+ (id)sharedListener;
+ (id)sharedListenerIfExists;

- (id)init;
- (void)dealloc;
- (id)_initShared;
- (void)_flush;
- (void)startListening;
- (void)stopListening;
- (void)_enqueueRequest:(id)arg1;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2;

@end
