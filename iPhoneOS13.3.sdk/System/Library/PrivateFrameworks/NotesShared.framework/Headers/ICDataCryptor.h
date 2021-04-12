//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSMutableDictionary, NSString;

@interface ICDataCryptor : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_tagDictionary;
    NSString *_cloudSyncingObjectIdentifier;
    NSMutableDictionary *_initializationVectorDictionary;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *initializationVectorDictionary; // @synthesize initializationVectorDictionary=_initializationVectorDictionary;
@property(retain, nonatomic) NSString *cloudSyncingObjectIdentifier; // @synthesize cloudSyncingObjectIdentifier=_cloudSyncingObjectIdentifier;
@property(retain, nonatomic) NSMutableDictionary *tagDictionary; // @synthesize tagDictionary=_tagDictionary;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)decryptEncryptedData:(id)arg1 identifier:(id)arg2;
- (id)encryptData:(id)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) NSData *unwrappedKey;
- (id)initWithCloudSyncingObjectIdentifier:(id)arg1;
- (id)init;

@end

