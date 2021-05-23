/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

#import <NetworkExtension/Swift-Protocol.h>

@class NSString, PCSimpleTimer;

@interface NEIKEv2Rekey : NSObject <Swift>

{
    int _ikeLifetimeMinutes;
    int _childLifetimeMinutes;
    PCSimpleTimer *_ikeLifetime;
    PCSimpleTimer *_childLifetime;
    CDUnknownBlockType _ikeRekeyHandler;
    CDUnknownBlockType _childRekeyHandler;
}

@property (retain) PCSimpleTimer *ikeLifetime;
@property (retain) PCSimpleTimer *childLifetime;
@property int ikeLifetimeMinutes;
@property int childLifetimeMinutes;
@property (copy) CDUnknownBlockType ikeRekeyHandler;
@property (copy) CDUnknownBlockType childRekeyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)clearTimers;
- (void)startIKETimer:(int)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (void)startChildTimer:(int)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (void)invokeIKERekeyHandler;
- (void)invokeChildRekeyHandler;

@end
