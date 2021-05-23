/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString, NSURL;

@interface SSVMediaSocialPostAttachment : NSObject

{
    NSString *_albumIdentifier;
    NSArray *_artists;
    NSData *_assetData;
    NSURL *_assetURL;
    NSString *_attachmentDescription;
    NSString *_categoryName;
    NSMutableDictionary *_childAttachments;
    _Bool _deletesAssetWhenFinished;
    _Bool _explicitContent;
    double _previewFrameTimestamp;
    NSString *_subtitle;
    NSString *_title;
    NSString *_uti;
}

@property (copy, nonatomic) NSArray *artists;
@property (copy, nonatomic) NSString *albumIdentifier;
@property (copy, nonatomic) NSString *attachmentDescription;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSData *assetData;
@property (copy, nonatomic) NSURL *assetURL;
@property (nonatomic, readonly) long long attachmentType;
@property (copy, nonatomic) NSString *UTI;
@property (nonatomic) _Bool deletesAssetWhenFinished;
@property (nonatomic) double previewFrameTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)childAttachmentForRelationship:(id)arg1;
- (void)enumerateChildAttachmentsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setChildAttachment:(id)arg1 forRelationship:(id)arg2;

@end
