/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary, NSNumber, NSObject;

@protocol OS_dispatch_queue;

@interface ADWatchDogManager : ADSingleton

{
    NSObject<OS_dispatch_queue> *_watchdogQueue;
    NSNumber *_currentToken;
    NSMutableDictionary *_tokenCollection;
}

@property (retain, nonatomic) NSNumber *currentToken;
@property (nonatomic, readonly) NSMutableDictionary *tokenCollection;

+ (id)sharedInstance;

- (id)init;
- (void)incrementToken;
- (id)getNextToken;
- (_Bool)removeWatchdogWithToken:(id)arg1;
- (id)createNewWatchdog:(id)arg1 withTimer:(unsigned long long)arg2;
- (void)simulateCrash:(id)arg1 becauseOf:(unsigned long long)arg2 actuallyTook:(double)arg3;
- (_Bool)updateReason:(id)arg1 forToken:(id)arg2;

@end
