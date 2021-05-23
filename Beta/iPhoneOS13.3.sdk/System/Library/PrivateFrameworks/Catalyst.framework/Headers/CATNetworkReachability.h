/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATAddress;

@protocol CATNetworkReachabilityDelegate;

@interface CATNetworkReachability : NSObject

{
    struct __SCNetworkReachability *mReachabilityRef;
    unsigned int _flags;
    CATAddress *_address;
    id <CATNetworkReachabilityDelegate> _delegate;
}

@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) CATAddress *address;
@property (weak, nonatomic) id <CATNetworkReachabilityDelegate> delegate;
@property (nonatomic, readonly, getter=isReachable) _Bool reachable;

+ (id)reachabilityWithAddress:(id)arg1;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (_Bool)isReachableForLocalWiFiWithFlags:(unsigned int)arg1;
+ (_Bool)isReachableForNetworkWithFlags:(unsigned int)arg1;
+ (id)keyPathsForValuesAffectingReachable;

- (void)dealloc;
- (id)debugDescription;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)initWithAddress:(id)arg1;
- (void)delegateDidChange;
- (void)configureCallback;
- (void)reachabilityDidChangeWithFlags:(unsigned int)arg1;

@end
