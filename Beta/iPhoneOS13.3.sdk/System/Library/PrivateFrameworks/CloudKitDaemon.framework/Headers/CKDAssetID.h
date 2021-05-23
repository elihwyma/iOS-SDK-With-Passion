/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDPRecordIdentifier, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface CKDAssetID : NSObject

{
    CKDPRecordIdentifier *_recordID;
    NSData *_fileSignature;
    NSData *_referenceSignature;
    NSNumber *_size;
}

@property (nonatomic, readonly) CKDPRecordIdentifier *recordID;
@property (nonatomic, readonly) NSData *fileSignature;
@property (nonatomic, readonly) NSData *referenceSignature;
@property (nonatomic, readonly) NSNumber *size;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)CKPropertiesDescription;
- (id)initWithRecordID:(id)arg1 fileSignature:(id)arg2 referenceSignature:(id)arg3 size:(id)arg4;

@end
