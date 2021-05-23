/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSUUID, NWEndpoint, NWInterface;

@protocol OS_nw_path_flow;

__attribute__((visibility("hidden")))
@interface NWPathFlow : NSObject

{
    NSObject<OS_nw_path_flow> *_internalPathFlow;
}

@property (readonly) NSObject<OS_nw_path_flow> *internalPathFlow;
@property (nonatomic, readonly) NWInterface *interface;
@property (nonatomic, readonly) NWEndpoint *localEndpoint;
@property (nonatomic, readonly) NWEndpoint *remoteEndpoint;
@property (nonatomic, readonly) NSUUID *flowID;
@property (nonatomic, readonly) NSUUID *nexusAgent;
@property (nonatomic, readonly) NSUUID *nexusInstance;
@property (nonatomic, readonly) unsigned int nexusPort;
@property (nonatomic, readonly, getter=isViable) _Bool viable;
@property (nonatomic, readonly, getter=isAssigned) _Bool assigned;
@property (nonatomic, readonly, getter=isLocal) _Bool local;
@property (nonatomic, readonly, getter=isDirect) _Bool direct;
@property (nonatomic, readonly, getter=isDefunct) _Bool defunct;
@property (nonatomic, readonly) _Bool supportsIPv4;
@property (nonatomic, readonly) _Bool supportsIPv6;

- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)privateDescription;
- (id)initWithPathFlow:(id)arg1;

@end
