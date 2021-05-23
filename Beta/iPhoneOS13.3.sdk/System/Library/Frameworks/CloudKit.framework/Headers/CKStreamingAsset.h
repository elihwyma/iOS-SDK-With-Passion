/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class C2RequestOptions, NSData, NSDate, NSString, NSURL;

@interface CKStreamingAsset : NSObject

{
    _Bool _hasSize;
    NSData *_fileSignature;
    NSData *_referenceSignature;
    NSString *_owner;
    unsigned long long _expectedSizeBytes;
    NSURL *_uploadURL;
    NSDate *_uploadURLExpirationDate;
    unsigned long long _reservedSize;
    C2RequestOptions *_requestOptions;
    NSURL *_downloadURL;
    NSDate *_downloadURLExpirationDate;
    unsigned long long _size;
    NSString *_uploadReceipt;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSData *fileSignature;
@property (copy, nonatomic) NSData *referenceSignature;
@property (copy, nonatomic) NSString *owner;
@property (nonatomic) unsigned long long expectedSizeBytes;
@property (copy, nonatomic) NSURL *uploadURL;
@property (copy, nonatomic) NSDate *uploadURLExpirationDate;
@property (nonatomic) unsigned long long reservedSize;
@property (copy, nonatomic) C2RequestOptions *requestOptions;
@property (copy, nonatomic) NSURL *downloadURL;
@property (copy, nonatomic) NSDate *downloadURLExpirationDate;
@property (nonatomic) unsigned long long size;
@property (nonatomic) _Bool hasSize;
@property (copy, nonatomic) NSString *uploadReceipt;
@property (nonatomic, readonly) unsigned long long bytesUploaded;
@property (nonatomic, readonly) unsigned long long bytesUpperBound;
@property (copy, nonatomic, readonly) NSURL *contentDownloadURL;
@property (copy, nonatomic, readonly) NSDate *contentDownloadURLExpirationDate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)_initBare;
- (void)copyServerFieldsFromStreamingAsset:(id)arg1;
- (id)initWithExpectedSizeBytes:(unsigned long long)arg1;

@end
