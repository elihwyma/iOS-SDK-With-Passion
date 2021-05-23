/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IDSCommnatManager : NSObject

{
    NSString *_cbuuid;
    NSString *_deviceUniqueID;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _linkBlock;
    struct sockaddr_storage _commnatServer;
    NSMutableDictionary *_nonceToRequest;
    NSMutableDictionary *_nonceToCandidates;
}

- (void)dealloc;
- (void)invalidate;
- (void)_getCommNATServerAddress;
- (void)sendCommnatRequest:(id)arg1 candidate:(id)arg2;
- (_Bool)isCommnatDiscoveryDone;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 linkBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)startCommnatDiscoveryForHostCandidates:(id)arg1;
- (void)processCommnatResponse:(CDStruct_12676517 *)arg1 arrivalTime:(double)arg2;

@end
