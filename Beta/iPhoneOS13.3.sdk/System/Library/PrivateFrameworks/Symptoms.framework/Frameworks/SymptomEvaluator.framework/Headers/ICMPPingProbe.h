/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/TestProbe.h>

@class NSData, NSMutableArray, NSObject, NSString;

@protocol ICMPPingProbeDelegate, OS_dispatch_semaphore, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ICMPPingProbe : TestProbe

{
    _Bool stopTestOnFirstSuccess;
    NSObject<OS_dispatch_source> *timeoutTimer;
    NSObject<OS_dispatch_source> *pingTimer;
    NSObject<OS_dispatch_source> *burstTimer;
    NSString *_hostName;
    NSData *_hostAddressData;
    struct __CFHost *_host;
    struct __CFSocket *_socket;
    unsigned short _identifier;
    unsigned short _nextSequenceNumber;
    _Bool _hostAddressIsIPv6;
    float _percentComplete;
    unsigned int _interfaceIndex;
    id <ICMPPingProbeDelegate> _delegate;
    NSString *_ipAddress;
    NSMutableArray *_pings;
    unsigned long long _successCount;
    unsigned long long _failedCount;
    unsigned long long _pingCount;
    double _interPingInterval;
    unsigned long long _burstCount;
    double _interBurstInterval;
    unsigned long long _currentBurst;
    NSObject<OS_dispatch_semaphore> *_pingRunLoopReady;
    struct __CFRunLoop *_pingRunLoop;
    struct _opaque_pthread_t *_pingThread;
    struct __CFRunLoopSource *_rls;
}

@property (retain, nonatomic) NSMutableArray *pings;
@property (nonatomic) unsigned long long successCount;
@property (nonatomic) unsigned long long failedCount;
@property (nonatomic) float percentComplete;
@property (nonatomic) unsigned long long pingCount;
@property (nonatomic) double interPingInterval;
@property (nonatomic) unsigned long long burstCount;
@property (nonatomic) double interBurstInterval;
@property (nonatomic) unsigned long long currentBurst;
@property (nonatomic) _Bool hostAddressIsIPv6;
@property (nonatomic) unsigned int interfaceIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pingRunLoopReady;
@property (nonatomic) struct __CFRunLoop *pingRunLoop;
@property (nonatomic) struct _opaque_pthread_t *pingThread;
@property (nonatomic) struct __CFRunLoopSource *rls;
@property (retain, nonatomic) id <ICMPPingProbeDelegate> delegate;
@property (retain, nonatomic) NSString *ipAddress;
@property (retain, nonatomic) NSString *hostName;

+ (void)initialize;
+ (_Bool)stringAddrToSockaddr:(id)arg1 to:(struct sockaddr *)arg2;
+ (_Bool)loadStringUtils;
+ (unsigned long long)icmpIPv4OffsetInPacket:(id)arg1;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)readData;
- (void)didFailWithError:(id)arg1;
- (void)stopTest;
- (void)stopRunLoop;
- (void)startICMPPingTestTo:(id)arg1 hostName:(id)arg2 interface:(unsigned int)arg3 pingCount:(long long)arg4 interPingInterval:(double)arg5 burstCount:(long long)arg6 interBurstInterval:(double)arg7 timeout:(double)arg8 stopTestOnFirstSuccess:(_Bool)arg9;
- (_Bool)startRunLoop;
- (void)startThePinging;
- (void)sendPingWithData:(id)arg1;
- (void)stopDataTransfer;
- (id)_shortErrorFromError:(id)arg1;
- (void)pingDidFailToSendToAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned int)arg3 error:(id)arg4;
- (void)pingDidSendToAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned int)arg3;
- (_Bool)isValidIPv6PingResponsePacket:(id)arg1 isForMe:(_Bool *)arg2 sequence:(unsigned short *)arg3 isBadPacket:(_Bool *)arg4;
- (_Bool)isValidIPv4PingResponsePacket:(id)arg1 isForMe:(_Bool *)arg2 sequence:(unsigned short *)arg3 isBadPacket:(_Bool *)arg4;
- (void)pingDidReceivePingResponseFromAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned int)arg3;
- (void)pingDidReceiveUnexpectedPingResponseFromAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned int)arg3;
- (void)sendPing;

@end
