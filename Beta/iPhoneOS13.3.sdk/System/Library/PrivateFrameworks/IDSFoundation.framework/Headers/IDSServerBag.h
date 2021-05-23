/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSRateLimiter, IDSRemoteURLConnection, IMConnectionMonitor, NSArray, NSData, NSDate, NSDictionary, NSMutableURLRequest, NSNumber, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface IDSServerBag : NSObject

{
    _Bool _allowSelfSignedCertificates;
    _Bool _allowUnsignedBags;
    BOOL _hashAlgorithm;
    int _trustStatus;
    int _token;
    IMConnectionMonitor *_connectionMonitor;
    NSURL *_bagURL;
    NSString *_apsEnvironmentName;
    NSDictionary *_bag;
    NSDictionary *_cachedBag;
    NSMutableURLRequest *_urlRequest;
    IDSRemoteURLConnection *_remoteURLConnection;
    NSObject<OS_dispatch_queue> *_bagQueue;
    NSString *_cachedURLString;
    NSData *_certData;
    NSString *_cachedHash;
    NSDate *_loadDate;
    NSNumber *_cacheTime;
    unsigned long long _hasPairedDeviceState;
    NSData *_serverSignature;
    NSArray *_serverCerts;
    NSData *_serverGivenBag;
    CDUnknownBlockType _remoteURLCreationBlock;
    CDUnknownBlockType _connectionMonitorCreationBlock;
    IDSRateLimiter *_rateLimiter;
}

@property (retain) IMConnectionMonitor *_connectionMonitor;
@property (retain) NSURL *bagURL;
@property (retain) NSString *apsEnvironmentName;
@property (retain, setter=_setBag:) NSDictionary *_bag;
@property (retain, setter=_setCachedBag:) NSDictionary *_cachedBag;
@property (retain) NSMutableURLRequest *_urlRequest;
@property (retain, setter=_setCachedURLString:) NSString *_cachedURLString;
@property (retain, setter=_setCachedHash:) NSString *_cachedHash;
@property (retain) NSDate *_loadDate;
@property (retain) NSNumber *_cacheTime;
@property (retain) IDSRemoteURLConnection *_remoteURLConnection;
@property (copy) CDUnknownBlockType remoteURLCreationBlock;
@property (copy) CDUnknownBlockType connectionMonitorCreationBlock;
@property (retain) NSObject<OS_dispatch_queue> *_bagQueue;
@property (setter=_setTrustStatus:) int _trustStatus;
@property (retain) NSData *_certData;
@property _Bool allowSelfSignedCertificates;
@property _Bool allowUnsignedBags;
@property int token;
@property unsigned long long hasPairedDeviceState;
@property (retain) NSData *serverSignature;
@property (retain) NSArray *serverCerts;
@property (retain) NSData *serverGivenBag;
@property BOOL hashAlgorithm;
@property (retain, nonatomic) IDSRateLimiter *rateLimiter;
@property (readonly) _Bool isLoaded;
@property (readonly) _Bool isLoading;
@property (readonly) _Bool isInDebilitatedMode;
@property (readonly) _Bool isServerAvailable;

+ (id)sharedInstance;
+ (id)sharedInstanceForBagType:(long long)arg1;
+ (id)_bagCreationLock;
+ (id)_sharedInstanceForClass:(Class)arg1;
+ (id)defaultBag;
+ (id)_sharedInstance;

- (void)dealloc;
- (void)_invalidate;
- (id)objectForKey:(id)arg1;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)startBagLoad;
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(_Bool)arg3 allowUnsignedBags:(_Bool)arg4 hashAlgorithm:(BOOL)arg5;
- (id)_bagDefaultsDomain;
- (unsigned long long)_bagDomain;
- (void)_clearCache;
- (_Bool)trustRefFromCertificates:(id)arg1 canReportFailure:(_Bool)arg2 trustRef:(struct __SecTrust **)arg3;
- (void)__saveCacheToPrefs;
- (void)_saveCacheToPrefs;
- (void)_loadFromCache;
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(_Bool)arg3 allowUnsignedBags:(_Bool)arg4 hashAlgorithm:(BOOL)arg5 remoteURLCreationBlock:(CDUnknownBlockType)arg6 connectionMonitorCreationBlock:(CDUnknownBlockType)arg7;
- (void)_saveToCache;
- (_Bool)_allowInvalid;
- (_Bool)_loadFromDictionary:(id)arg1 returningError:(id *)arg2;
- (_Bool)_loadFromSignedDictionary:(id)arg1 returningError:(id *)arg2;
- (void)_generateURLRequest;
- (void)_cancelCurrentLoad;
- (void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(_Bool)arg3;
- (void)_startBagLoad:(_Bool)arg1;
- (void)_bagExternallyReloaded;
- (void)forceBagLoad;
- (id)urlWithKey:(id)arg1;

@end
