/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSSet;

@interface TPPeerDynamicInfo : NSObject

{
    unsigned long long _clock;
    NSSet *_includedPeerIDs;
    NSSet *_excludedPeerIDs;
    NSDictionary *_dispositions;
    NSSet *_preapprovals;
    NSData *_data;
    NSData *_sig;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *sig;
@property (retain, nonatomic) NSDictionary *dispositions;
@property (nonatomic, readonly) unsigned long long clock;
@property (nonatomic, readonly) NSSet *includedPeerIDs;
@property (nonatomic, readonly) NSSet *excludedPeerIDs;
@property (nonatomic, readonly) NSSet *preapprovals;

+ (id)dynamicInfoPBWithClock:(unsigned long long)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5;
+ (id)dynamicInfoWithClock:(unsigned long long)arg1 includedPeerIDs:(id)arg2 excludedPeerIDs:(id)arg3 dispositions:(id)arg4 preapprovals:(id)arg5 signingKeyPair:(id)arg6 error:(id *)arg7;
+ (id)dynamicInfoWithData:(id)arg1 sig:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithObj:(id)arg1 data:(id)arg2 sig:(id)arg3;
- (_Bool)checkSignatureWithKey:(id)arg1;
- (_Bool)isEqualToPeerDynamicInfo:(id)arg1;

@end
