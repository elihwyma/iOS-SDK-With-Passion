/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSData, NSString, NSURL;

@interface CKAssetCopyInfo : NSObject

{
    NSData *_fileSignature;
    NSData *_referenceSignature;
    NSData *_assetKey;
    NSURL *_assetURL;
    NSString *_senderID;
}

@property (copy, nonatomic) NSData *fileSignature;
@property (copy, nonatomic) NSData *referenceSignature;
@property (copy, nonatomic) NSData *assetKey;
@property (copy, nonatomic) NSURL *assetURL;
@property (copy, nonatomic) NSString *senderID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;

@end
