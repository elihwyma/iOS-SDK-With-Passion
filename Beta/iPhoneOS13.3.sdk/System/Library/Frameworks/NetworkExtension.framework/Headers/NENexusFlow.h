/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NENexusFlowManager, NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlow : NSObject

{
    unsigned long long _state;
    struct nw_protocol *_protocol;
    NSUUID *_nexusInstance;
    NENexusFlowManager *_manager;
}

@property (retain) NSUUID *nexusInstance;
@property (nonatomic) struct nw_protocol *protocol;
@property (nonatomic) unsigned long long state;
@property (weak) NENexusFlowManager *manager;
@property (nonatomic, readonly) NWEndpoint *endpoint;
@property (nonatomic, readonly) NWParameters *parameters;
@property (nonatomic, readonly) NSUUID *clientIdentifier;

- (void)dealloc;
- (void)setupFlowProtocolWithUUID:(id)arg1;

@end
