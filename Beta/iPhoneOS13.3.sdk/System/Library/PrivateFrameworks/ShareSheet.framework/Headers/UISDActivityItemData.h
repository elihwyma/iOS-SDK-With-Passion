/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface UISDActivityItemData : NSObject

{
    NSArray *_securityContexts;
    NSDictionary *_openURLAnnotationsByURL;
    NSMutableDictionary *_attachmentNamesByItem;
    NSMutableDictionary *_subjectsByItem;
    NSMutableDictionary *_previewImagesByItem;
    NSMutableDictionary *_previewImageDataByItem;
    NSMutableDictionary *_dataTypesByItem;
}

@property (nonatomic, readonly) NSMutableDictionary *attachmentNamesByItem;
@property (nonatomic, readonly) NSMutableDictionary *subjectsByItem;
@property (nonatomic, readonly) NSMutableDictionary *previewImagesByItem;
@property (nonatomic, readonly) NSMutableDictionary *previewImageDataByItem;
@property (nonatomic, readonly) NSMutableDictionary *dataTypesByItem;
@property (retain, nonatomic) NSArray *securityContexts;
@property (retain, nonatomic) NSDictionary *openURLAnnotationsByURL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addAttachmentName:(id)arg1 forItem:(id)arg2;
- (void)addSubject:(id)arg1 forItem:(id)arg2;
- (void)addPreviewImageData:(id)arg1 forItem:(id)arg2;
- (void)addPreviewImage:(id)arg1 forItem:(id)arg2;
- (void)addDataType:(id)arg1 forItem:(id)arg2;
- (id)attachmentNameForItem:(id)arg1;
- (id)subjectForItem:(id)arg1;
- (id)previewImageForItem:(id)arg1;
- (id)previewImageDataForItem:(id)arg1;
- (id)dataTypeForItem:(id)arg1;

@end
