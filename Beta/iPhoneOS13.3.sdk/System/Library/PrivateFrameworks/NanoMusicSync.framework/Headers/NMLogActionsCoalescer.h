/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface NMLogActionsCoalescer : NSObject

{
    NSMutableArray *_pendingLogActions;
    id _identifier;
    NSObject<OS_os_log> *_category;
    unsigned long long _partNumber;
    NSString *_prefix;
    unsigned long long _messageBufferLimit;
}

@property (retain, nonatomic) NSString *prefix;
@property (nonatomic) unsigned long long messageBufferLimit;

- (void)flush;
- (void)_writeLogMessageFromActions:(id)arg1 includingPartNumber:(_Bool)arg2;
- (void)_addAction:(id)arg1 toPendingActions:(id)arg2 limit:(unsigned long long)arg3;
- (id)_logMessageFromPendingLogActions:(id)arg1 includingPartNumber:(_Bool)arg2;
- (id)initWithIdentifier:(id)arg1 logCategory:(id)arg2;
- (void)addLogAction:(id)arg1;

@end
