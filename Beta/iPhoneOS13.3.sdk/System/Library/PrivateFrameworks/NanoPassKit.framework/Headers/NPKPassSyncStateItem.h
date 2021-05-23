/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface NPKPassSyncStateItem : NSObject

{
    NSString *_passTypeIdentifier;
    NSString *_serialNumber;
    NSNumber *_sequenceCounter;
    NSData *_manifestHash;
    NSDictionary *_manifest;
}

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic, readonly) NSString *uniqueID;
@property (retain, nonatomic) NSNumber *sequenceCounter;
@property (retain, nonatomic) NSData *manifestHash;
@property (retain, nonatomic) NSDictionary *manifest;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)initWithPass:(id)arg1;
- (id)initWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 sequenceCounter:(id)arg3 manifestHash:(id)arg4 manifest:(id)arg5;
- (id)initWithProtoSyncStateItem:(id)arg1;
- (id)protoSyncStateItem;
- (_Bool)isEqualToPassSyncStateItem:(id)arg1;

@end
