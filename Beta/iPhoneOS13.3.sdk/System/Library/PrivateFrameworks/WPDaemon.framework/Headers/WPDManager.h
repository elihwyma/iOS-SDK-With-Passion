/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, WPDaemonServer;

@interface WPDManager : NSObject

{
    _Bool _restricted;
    _Bool _testMode;
    _Bool _isHomePod;
    long long _state;
    WPDaemonServer *_server;
    NSString *_name;
    NSSet *_cbManagers;
}

@property (nonatomic) long long state;
@property (nonatomic) _Bool isHomePod;
@property (weak) WPDaemonServer *server;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool restricted;
@property (nonatomic) _Bool testMode;
@property (retain, nonatomic) NSSet *cbManagers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)wpStateAsString:(long long)arg1;
+ (id)cbStateAsString:(long long)arg1;

- (void)dealloc;
- (void)cleanup;
- (void)update;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (id)generateStateDump;
- (void)cbManagerDidUpdateState:(id)arg1;
- (id)initWithServer:(id)arg1 Name:(id)arg2;
- (void)updateState:(long long)arg1 Restricted:(_Bool)arg2;

@end
