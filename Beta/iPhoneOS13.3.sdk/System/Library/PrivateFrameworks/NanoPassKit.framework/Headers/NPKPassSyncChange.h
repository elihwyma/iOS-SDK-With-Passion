/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKPassSyncStateItem, NSData, NSDictionary, NSString, NSUUID;

@interface NPKPassSyncChange : NSObject

{
    NSUUID *_changeUUID;
    NSData *_reconciledStateHash;
    unsigned long long _changeType;
    NSString *_uniqueID;
    NPKPassSyncStateItem *_syncStateItem;
    NSData *_passData;
    NSData *_baseManifestHashForPartialUpdate;
    NSDictionary *_remoteAssetsForPartialUpdate;
}

@property (retain, nonatomic) NSUUID *changeUUID;
@property (retain, nonatomic) NSData *reconciledStateHash;
@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NPKPassSyncStateItem *syncStateItem;
@property (retain, nonatomic) NSData *passData;
@property (retain, nonatomic) NSData *baseManifestHashForPartialUpdate;
@property (retain, nonatomic) NSDictionary *remoteAssetsForPartialUpdate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtoPassSyncChange:(id)arg1;
- (id)protoPassSyncChange;
- (id)initWithChangeUUID:(id)arg1 reconciledStateHash:(id)arg2 changeType:(unsigned long long)arg3 uniqueID:(id)arg4 syncStateItem:(id)arg5 passData:(id)arg6 baseManifestHashForPartialUpdate:(id)arg7 remoteAssetsForPartialUpdate:(id)arg8;
- (id)initWithChangeUUID:(id)arg1 reconciledStateHash:(id)arg2 changeType:(unsigned long long)arg3 uniqueID:(id)arg4 syncStateItem:(id)arg5 passData:(id)arg6;
- (_Bool)isEqualToChangeIgnoringUUID:(id)arg1;
- (_Bool)isEqualToChange:(id)arg1;

@end
