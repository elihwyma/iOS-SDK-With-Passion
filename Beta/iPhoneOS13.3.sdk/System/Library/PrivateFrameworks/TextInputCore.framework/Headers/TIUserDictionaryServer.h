/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

#import <TextInputCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSUUID, _KSTextReplacementServer;

@protocol OS_dispatch_queue;

@interface TIUserDictionaryServer : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_observers;
    NSArray *_cache;
    _Bool _updating;
    int _pendingUpdates;
    unsigned long long _keyboardActivityState;
    long long _recentClientCount;
    NSUUID *_userDictionaryUUID;
    _KSTextReplacementServer *_textReplacementServer;
}

@property (copy, nonatomic) NSUUID *userDictionaryUUID;
@property (retain, nonatomic) _KSTextReplacementServer *textReplacementServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
+ (id)singletonInstance;
+ (double)decrementClientDelay;

- (id)init;
- (void)dealloc;
- (id)addObserver:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)resetCache;
- (void)updateCache;
- (void)startServer;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)getPhraseShortcutPairs:(CDUnknownBlockType)arg1;
- (void)loadPhraseShortcutPairs:(CDUnknownBlockType)arg1;
- (void)managedKeyboardSettingsDidChange:(id)arg1;
- (void)incrementRecentClientCount;
- (void)decrementRecentClientCountAfterDelay;
- (void)handleIdleTimeout;

@end
