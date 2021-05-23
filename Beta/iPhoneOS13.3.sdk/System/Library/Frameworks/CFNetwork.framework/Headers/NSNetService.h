/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSArray, NSString;

@protocol NSNetServiceDelegate;

@interface NSNetService : NSObject

{
    id _netService;
    id _delegate;
    id _reserved;
}

@property id <NSNetServiceDelegate> delegate;
@property _Bool includesPeerToPeer;
@property (copy, readonly) NSString *name;
@property (copy, readonly) NSString *type;
@property (copy, readonly) NSString *domain;
@property (copy, readonly) NSString *hostName;
@property (copy, readonly) NSArray *addresses;
@property (readonly) long long port;

+ (id)dictionaryFromTXTRecordData:(id)arg1;
+ (id)dataFromTXTRecordDictionary:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)stop;
- (void)publish;
- (void)resolve;
- (id)_monitors;
- (id)initWithCFNetService:(struct __CFNetService *)arg1;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (_Bool)_includesAWDL;
- (void)_setIncludesAWDL:(_Bool)arg1;
- (void)_scheduleInDefaultRunLoopForMode:(id)arg1;
- (void)_internal_publishWithOptions:(unsigned long long)arg1;
- (id)normalizedType;
- (void)publishWithServer:(unsigned long long)arg1;
- (void)publishWithOptions:(unsigned long long)arg1;
- (void)_dispatchCallBackWithError:(CDStruct_59046461)arg1;
- (struct __CFNetService *)_internalNetService;
- (_Bool)getInputStream:(out id *)arg1 outputStream:(out id *)arg2;
- (void)resolveWithTimeout:(double)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (_Bool)setTXTRecordData:(id)arg1;
- (id)TXTRecordData;

@end
