/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol INIntentPreferencesAndVocabularyUpdateService, OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject

{
    NSXPCConnection *_connection;
    id <INIntentPreferencesAndVocabularyUpdateService> _remoteObjectProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (void)_clearConnection;
- (id)_syncService;
- (id)settingsService;

@end
