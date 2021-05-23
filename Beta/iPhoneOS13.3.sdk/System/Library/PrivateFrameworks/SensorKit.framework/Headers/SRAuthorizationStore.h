/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface SRAuthorizationStore : NSObject

{
    int _notifyToken;
    NSDictionary *_authorizationValues;
    NSDictionary *_lastModifiedAuthorizationTimes;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSHashTable *_delegates;
}

@property (copy) NSDictionary *authorizationValues;
@property (copy) NSDictionary *lastModifiedAuthorizationTimes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)defaultStore;

- (id)init;
- (void)dealloc;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)startUpdatingAuthorizations;
- (void)updateAuthorizations;
- (void)updateLastModifiedTimes;
- (_Bool)serviceAuthorized:(id)arg1 forBundleId:(id)arg2;
- (_Bool)serviceAuthorized:(id)arg1;

@end
