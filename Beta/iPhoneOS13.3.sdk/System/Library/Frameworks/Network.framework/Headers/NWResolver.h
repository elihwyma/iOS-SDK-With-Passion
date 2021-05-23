/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, NWEndpoint, NWParameters;

@protocol OS_nw_resolver;

@interface NWResolver : NSObject

{
    NWEndpoint *_endpoint;
    NWParameters *_parameters;
    NSObject<OS_nw_resolver> *_internalResolver;
    long long _internalStatus;
    NSSet *_internalResolvedEndpoints;
    NSArray *_internalResolvedEndpointArray;
}

@property (readonly) NSObject<OS_nw_resolver> *internalResolver;
@property long long internalStatus;
@property (retain) NSSet *internalResolvedEndpoints;
@property (retain) NSArray *internalResolvedEndpointArray;
@property (nonatomic, readonly) long long status;
@property (readonly) NWEndpoint *endpoint;
@property (readonly) NWParameters *parameters;
@property (nonatomic, readonly) NSSet *resolvedEndpoints;
@property (nonatomic, readonly) NSArray *resolvedEndpointArray;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (void)setUpdateHandler;
- (id)copyResolvedEndpoints;
- (id)copyResolvedEndpointArray;

@end
