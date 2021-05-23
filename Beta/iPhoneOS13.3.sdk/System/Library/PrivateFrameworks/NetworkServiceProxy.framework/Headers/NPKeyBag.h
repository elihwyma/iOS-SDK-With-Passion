/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSPredicate;

@interface NPKeyBag : NSObject

{
    unsigned int _index;
    unsigned int _generation;
    NSArray *_keys;
    long long _fallbackReason;
    NSData *_updateHash;
    long long _TFOStatusOverride;
    double _lastUsedTimestamp;
    NSDictionary *_onRampMap;
    NSArray *_onRampList;
    NSPredicate *_validOnRampPredicate;
    NSPredicate *_validOnRampWithTFOPredicate;
}

@property (retain) NSDictionary *onRampMap;
@property (retain) NSArray *onRampList;
@property (retain) NSPredicate *validOnRampPredicate;
@property (retain) NSPredicate *validOnRampWithTFOPredicate;
@property (retain, nonatomic) NSArray *keys;
@property unsigned int index;
@property long long fallbackReason;
@property (nonatomic) unsigned int generation;
@property (retain, nonatomic) NSData *updateHash;
@property (nonatomic) long long TFOStatusOverride;
@property (nonatomic) double lastUsedTimestamp;
@property (readonly) double timeSinceLastUsed;

- (id)init;
- (id)initWithData:(id)arg1;
- (id)data;
- (void)removeIPv6Keys;
- (void)logWithMessage:(id)arg1 identifier:(id)arg2;
- (id)initWithOnRamps:(id)arg1 currentNetworkInfo:(id)arg2 currentEdgeIndex:(long long)arg3 currentEdgeList:(id)arg4 generation:(unsigned int)arg5 identifier:(id)arg6 updateHash:(id)arg7;
- (void)createOnRamps;
- (id)copyUsableOnRamps:(_Bool)arg1 requireTFO:(_Bool)arg2;
- (void)moveToNextOnRamp;
- (_Bool)updateHashMatchesEdgeSet:(id)arg1;
- (id)getOnRampForEndpoint:(id)arg1;
- (void)moveToOnRamp:(id)arg1;

@end
