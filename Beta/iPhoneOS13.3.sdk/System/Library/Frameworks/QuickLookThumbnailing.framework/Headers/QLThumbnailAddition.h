/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class GSAddition, NSDictionary, NSURL, QLThumbnailVersion;

@interface QLThumbnailAddition : NSObject

{
    NSURL *_additionURL;
    long long _additionURLSandboxToken;
    NSDictionary *_metadata;
    GSAddition *_addition;
    NSDictionary *_thumbnailDataDictionary;
    QLThumbnailVersion *_thumbnailVersion;
}

@property (readonly) GSAddition *genStoreAddition;
@property (retain) NSURL *additionURL;
@property (retain) NSDictionary *thumbnailDataDictionary;
@property (retain) NSDictionary *metadata;
@property long long additionURLSandboxToken;
@property (readonly) QLThumbnailVersion *thumbnailVersion;
@property (readonly) unsigned long long additionSize;

+ (_Bool)associateThumbnailsForDocumentAtURL:(id)arg1 withDocumentAtURL:(id)arg2 error:(id *)arg3;
+ (_Bool)associateThumbnailsForDocumentAtURL:(id)arg1 withImmutableDocument:(_Bool)arg2 atURL:(id)arg3 error:(id *)arg4;
+ (void)downloadOrGenerateThumbnailAtURL:(id)arg1;
+ (void)generateThumbnailIfPossibleAtLogicalURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)associateImage:(struct CGImage *)arg1 metadata:(id)arg2 automaticallyGenerated:(_Bool)arg3 withURL:(id)arg4 error:(id *)arg5;
+ (id)metadataForGeneratedThumbnailForURL:(id)arg1 maximumDimension:(double)arg2;
+ (_Bool)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id *)arg4;
+ (id)plistInExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id *)arg4;
+ (_Bool)_hitAdditionsOnURLUsingDaemon:(id)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)setPropertyList:(id)arg1 forExtendedAttributeNamed:(const char *)arg2 flags:(unsigned long long)arg3 onFileDescriptor:(int)arg4 error:(id *)arg5;
+ (_Bool)removeExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id *)arg4;
+ (_Bool)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withImmutableDocument:(_Bool)arg3 atURL:(id)arg4 error:(id *)arg5;
+ (id)imageNameFor1024ThumbnailInMetadataDictionary:(id)arg1;
+ (id)imageNameForThumbnailInImageSource:(struct CGImageSource *)arg1;
+ (id)imageNameFor1024ThumbnailAtURL:(id)arg1 metadataDictionary:(id)arg2;
+ (_Bool)_hitAdditionsOnURL:(id)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id *)arg4;
+ (_Bool)storeThumbnailDataDictionary:(id)arg1 metadata:(id)arg2 asExtendedAttributeOnURL:(id)arg3 error:(id *)arg4;
+ (id)additionCreationInfo;
+ (_Bool)imageContainsAlphaForOtherImages:(struct CGImage *)arg1;
+ (_Bool)imageContainsAlpha:(struct CGImage *)arg1;
+ (_Bool)_removedAdditionsOnURLUsingDaemon:(id)arg1;
+ (_Bool)_removeAdditionsOnURLDirectly:(id)arg1 error:(id *)arg2;
+ (_Bool)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id *)arg2;
+ (_Bool)_removedAdditionsOnURL:(id)arg1;
+ (void)downloadOrGenerateThumbnailAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)downloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fpfsDownloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)preFPFSDownloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)preFPFSDownloadThumbnailAtTaggedURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)removeAdditionsOnURL:(id)arg1 error:(id *)arg2;
+ (id)imageNameFor1024ThumbnailData:(id)arg1 metadataDictionary:(id)arg2;
+ (_Bool)removeThumbnailsStoredInExtendedAttributesOnURL:(id)arg1 error:(id *)arg2;
+ (unsigned long long)sizeOfAdditionsPresentOnURL:(id)arg1;
+ (_Bool)hasThumbnailOnImmutableDocumentAtURL:(id)arg1;
+ (id)thumbnailsDictionaryForURL:(id)arg1 error:(id *)arg2;
+ (_Bool)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id *)arg3;
+ (void)noteCloudDocsDownloadedFileAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)initWithAdditionsPresentOnURL:(id)arg1 error:(id *)arg2;
- (struct CGImage *)thumbnailWithMaximumDimension:(double)arg1 contentRect:(struct CGRect *)arg2 properties:(id *)arg3;
- (id)thumbnailDataForKey:(id)arg1;
- (id)thumbnailURLForKey:(id)arg1;
- (id)initWithAdditionsPresentOnURL:(id)arg1 includingExtendedAttributes:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_initWithXattrsPresentOnURL:(id)arg1 error:(id *)arg2;
- (_Bool)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id *)arg2;
- (_Bool)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id *)arg2;
- (id)thumbnailsDictionaryWithError:(id *)arg1;
- (id)allImageURLs;
- (_Bool)shouldBeInvalidatedByThumbnailVersion:(id)arg1;

@end
