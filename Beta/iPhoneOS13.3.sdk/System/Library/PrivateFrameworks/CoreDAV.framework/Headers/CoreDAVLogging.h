/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface CoreDAVLogging : NSObject

{
    NSMutableDictionary *_logDelegates;
    NSMapTable *_primaryLogDelegate;
    NSObject<OS_dispatch_queue> *_delegateMuckingQueue;
}

+ (id)sharedLogging;

- (id)init;
- (void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (id)logHandleForAccountInfoProvider:(id)arg1;
- (void)_logOldMessageForAccountInfoProvider:(id)arg1 level:(unsigned char)arg2 format:(const char *)arg3;
- (id)_delegatesToLogForProvider:(id)arg1;
- (_Bool)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;
- (_Bool)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;
- (id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1;
- (void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(char *)arg4;

@end
