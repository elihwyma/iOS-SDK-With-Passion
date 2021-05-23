/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@class FMXPCServiceDescription, FMXPCSession, NSString;

@protocol OS_dispatch_queue, SPFinderStateXPCProtocol;

@interface SPFinderStateManager : NSObject

{
    CDUnknownBlockType stateInfoChangedBlock;
    CDUnknownBlockType _stateChangedBlock;
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPFinderStateXPCProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id <SPFinderStateXPCProtocol> proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType stateChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType stateInfoChangedBlock;

- (id)init;
- (void)dealloc;
- (void)start;
- (id)remoteInterface;
- (void)fetchFinderState:(CDUnknownBlockType)arg1;
- (void)enableFinderModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)disableFinderModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)stateInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)setActiveCache:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateStateBlock;

@end
