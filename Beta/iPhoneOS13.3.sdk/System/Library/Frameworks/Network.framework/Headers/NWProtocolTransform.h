/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NWEndpoint;

@protocol OS_nw_protocol_transform;

@interface NWProtocolTransform : NSObject

{
    NSObject<OS_nw_protocol_transform> *_internalTransform;
}

@property (retain) NSObject<OS_nw_protocol_transform> *internalTransform;
@property (nonatomic) _Bool noProxy;
@property (nonatomic) int multipathService;
@property (copy, nonatomic) NWEndpoint *replacementEndpoint;
@property (nonatomic) _Bool tfo;
@property (nonatomic) _Bool tfoNoCookie;
@property (nonatomic) int dataMode;
@property (nonatomic) unsigned long long fallbackMode;
@property (nonatomic) _Bool prohibitDirect;
@property (nonatomic) _Bool disablePathFallback;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)privateDescription;
- (_Bool)fastOpenForceEnable;
- (void)setFastOpenForceEnable:(_Bool)arg1;
- (id)initWithCTransform:(id)arg1;
- (void)disableProtocol:(struct nw_protocol_identifier *)arg1;
- (void)clearProtocolsAtLevel:(int)arg1;
- (void)appendProtocol:(id)arg1 atLevel:(int)arg2;

@end
