/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/TestProbe.h>

@class NSMutableDictionary;

@protocol BonjourProbeDelegate, DNSResolverProbeErrorDelegate;

__attribute__((visibility("hidden")))
@interface DNSResolverProbe : TestProbe

{
    _Bool _includeAWDL;
    id <BonjourProbeDelegate> _bonjourDelegate;
    id <DNSResolverProbeErrorDelegate> _errorDelegate;
    struct _DNSServiceRef_t *_sharedDNSRef;
    struct _DNSServiceRef_t *_resolveDNSRef;
    struct _DNSServiceRef_t *_getAddrInfoDNSRef;
    NSMutableDictionary *_serviceDict;
}

@property (nonatomic) struct _DNSServiceRef_t *resolveDNSRef;
@property (nonatomic) struct _DNSServiceRef_t *getAddrInfoDNSRef;
@property (retain, nonatomic) NSMutableDictionary *serviceDict;
@property (nonatomic) _Bool includeAWDL;
@property (retain) id <BonjourProbeDelegate> bonjourDelegate;
@property (retain) id <DNSResolverProbeErrorDelegate> errorDelegate;
@property (nonatomic) struct _DNSServiceRef_t *sharedDNSRef;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)stopTest;
- (void)startDNSResolveFor:(id)arg1 includeAWDL:(_Bool)arg2;

@end
