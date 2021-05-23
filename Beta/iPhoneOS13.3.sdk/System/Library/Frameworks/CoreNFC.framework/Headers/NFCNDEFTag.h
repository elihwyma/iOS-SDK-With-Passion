/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSObject.h>

#import <CoreNFC/Swift-Protocol.h>

@class NSNumber, NSString;

@protocol NFTag, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NFCNDEFTag : NSObject <Swift>

{
    id <NFTag> _tag;
    NSNumber *_sessionKey;
    _Bool _writeLocked;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setDelegateQueue:(id)arg1;
- (void)_setSession:(id)arg1;
- (void)_connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryNDEFStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readNDEFWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)writeNDEF:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeLockWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSession:(id)arg1 tag:(id)arg2 startupConfig:(long long)arg3;
- (id)_getInternalReaderSession;
- (void)_setTag:(id)arg1;
- (_Bool)_disconnectWithError:(id *)arg1;
- (_Bool)isMatchingSession:(id)arg1 outError:(id *)arg2;
- (void)dispatchBlockOnDelegateQueueAsync:(CDUnknownBlockType)arg1;
- (_Bool)_connectWithError:(id *)arg1;

@end
