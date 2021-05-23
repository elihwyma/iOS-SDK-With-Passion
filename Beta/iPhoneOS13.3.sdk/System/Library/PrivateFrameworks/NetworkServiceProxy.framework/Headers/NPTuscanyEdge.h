/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NPLocation, NPWaldo, NSDate, NSDictionary, NSString, NWEndpoint;

@interface NPTuscanyEdge : NSObject

{
    _Bool _probePending;
    _Bool _reResolve;
    NSString *_label;
    unsigned long long _index;
    NPLocation *_location;
    double _distance;
    NSDictionary *_onRampLists;
    NSDictionary *_currentOnRampIndexList;
    NWEndpoint *_probeEndpoint;
    NWEndpoint *_onRampEndpoint;
    NSDate *_lastUsed;
    NPWaldo *_parentWaldo;
    NWEndpoint *_savedEndpoint;
}

@property (retain) NSDictionary *onRampLists;
@property (retain) NSDictionary *currentOnRampIndexList;
@property (readonly) NWEndpoint *probeEndpoint;
@property (readonly) NWEndpoint *onRampEndpoint;
@property (retain) NSDate *lastUsed;
@property (weak) NPWaldo *parentWaldo;
@property (retain) NWEndpoint *savedEndpoint;
@property _Bool reResolve;
@property (readonly) NSString *label;
@property unsigned long long index;
@property (readonly) NPLocation *location;
@property double distance;
@property _Bool probePending;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)resolveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 index:(unsigned long long)arg2 onRampEndpoint:(id)arg3 probeEndpoint:(id)arg4 location:(id)arg5;
- (void)iterateOnRampsForAddressFamily:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)getOnRamp:(long long)arg1 addressFamily:(id)arg2;
- (long long)currentIndex:(id)arg1;
- (id)unsynthesizeAddresses:(id)arg1;
- (id)getPortFromEndpoint:(id)arg1 defaultPort:(id)arg2;
- (id)getCurrentOnRamp:(id)arg1;
- (id)nextOnRampForLatency:(id)arg1 outIndex:(long long *)arg2;
- (void)setCurrentIndex:(long long)arg1 addressFamily:(id)arg2;
- (long long)compareByDistance:(id)arg1;
- (void)linkWithOnRampsRetainMissingAddressFamilies:(_Bool)arg1;

@end
