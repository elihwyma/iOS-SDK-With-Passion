/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSString, WFFileRepresentation;

@interface WFGalleryBanner : NSObject

{
    CKRecordID *_identifier;
    NSString *_name;
    CKRecordID *_detailPage;
    WFFileRepresentation *_iphone2xImageFile;
    WFFileRepresentation *_iphone3xImageFile;
    WFFileRepresentation *_ipad2xImageFile;
    NSString *_language;
    CKRecordID *_base;
    NSString *_persistentIdentifier;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CKRecordID *detailPage;
@property (retain, nonatomic) WFFileRepresentation *iphone2xImageFile;
@property (retain, nonatomic) WFFileRepresentation *iphone3xImageFile;
@property (retain, nonatomic) WFFileRepresentation *ipad2xImageFile;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) CKRecordID *base;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CKRecordID *identifier;

+ (id)properties;
+ (id)recordType;
+ (id)propertyForSize:(long long)arg1;
+ (double)scaleForBannerSize:(long long)arg1;
+ (struct CGSize)pointSizeForBannerSize:(long long)arg1;
+ (struct CGSize)pixelSizeForBannerSize:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)referenceActionForKey:(id)arg1;
- (id)imageFileForSize:(long long)arg1;
- (id)imageForSize:(long long)arg1;

@end
