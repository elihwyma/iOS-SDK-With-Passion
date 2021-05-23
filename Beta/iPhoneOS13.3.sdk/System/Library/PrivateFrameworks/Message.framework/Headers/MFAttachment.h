/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EMMailDropMetadata, MFAttachmentManager, MFAttachmentPlaceholder, MFMimePart, NSString, NSURL;

@protocol MFDataConsumer;

@interface MFAttachment : NSObject

{
    MFAttachmentManager *_attachmentManager;
    MFAttachmentPlaceholder *_placeholder;
    _Bool _isAutoArchive;
    _Bool _wantsCompletionBlockOffMainThread;
    NSURL *_url;
    MFMimePart *_part;
    NSString *_disposition;
    CDUnknownBlockType _fetchCompletionBlock;
    id <MFDataConsumer> _customConsumer;
    struct CGSize _imageDimensions;
}

@property (readonly) _Bool isContainedInRFC822;
@property (readonly) _Bool isContainedInCompose;
@property (copy) NSString *contentID;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) MFMimePart *part;
@property (copy, nonatomic) NSString *fileName;
@property (readonly) NSString *path;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *disposition;
@property (copy, nonatomic) NSString *remoteImageFileName;
@property (nonatomic) unsigned long long decodedFileSize;
@property (nonatomic) unsigned long long encodedFileSize;
@property (readonly) _Bool isDataAvailableLocally;
@property (readonly) _Bool shouldAutoDownload;
@property (readonly) NSString *inferredMimeType;
@property (readonly) NSString *fileUTType;
@property (readonly) _Bool isAutoArchive;
@property _Bool isPlaceholder;
@property (retain, nonatomic) MFAttachmentPlaceholder *placeholder;
@property (retain, nonatomic) EMMailDropMetadata *mailDropMetadata;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionBlock;
@property (retain, nonatomic) id <MFDataConsumer> customConsumer;
@property (nonatomic) _Bool wantsCompletionBlockOffMainThread;
@property (nonatomic, readonly) _Bool isImageFile;
@property (nonatomic, readonly) _Bool isVideoFile;
@property (nonatomic, readonly) _Bool isMediaFile;
@property (nonatomic, readonly) _Bool isRFC822;
@property (nonatomic, readonly) _Bool isCalendarFile;
@property (retain, nonatomic) NSString *eventID;
@property (retain, nonatomic) NSString *meetingStorePersistentID;
@property (retain, nonatomic) NSString *icsRepresentation;
@property (nonatomic) struct CGSize imageDimensions;

+ (_Bool)isSinglePagePDF:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)fileAttributes;
- (id)fileURL;
- (_Bool)conformsToType:(id)arg1;
- (_Bool)isAvailable;
- (id)fetchData;
- (_Bool)isCached;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)_dataProvider;
- (id)metadataValueForKey:(id)arg1;
- (id)fetchPlaceholderData;
- (id)fetchDataSynchronously:(id *)arg1 stripPrivateMetadata:(_Bool)arg2;
- (_Bool)isMailDrop;
- (id)fetchLocalData:(id *)arg1 stripPrivateMetadata:(_Bool)arg2;
- (id)readFromDisk;
- (id)filterData:(id)arg1;
- (id)fetchDataSynchronously:(id *)arg1;
- (id)fetchLocalData;
- (_Bool)contentTypeConformsToEventVCS;
- (id)filterVCSData:(id)arg1;
- (id)fileNameByStrippingZipIfNeeded:(_Bool)arg1;
- (id)_fileUTTypeForFileName:(id)arg1;
- (_Bool)isPDFFile;
- (_Bool)_isSinglePagePDFFileFetchLocalData:(_Bool)arg1;
- (unsigned long long)sizeOnDisk;
- (id)textEncodingGuessWithData:(id)arg1;
- (_Bool)contentTypeConformsToEventICS;
- (id)initWithURL:(id)arg1 attachmentManager:(id)arg2;
- (id)decodeFilterWithDataConsumer:(id)arg1;
- (id)fetchDataToURL:(id *)arg1;
- (id)fileWrapperUsingFetchedLocalData;
- (_Bool)isMailDropPhotoArchive;
- (id)newDownloadProgress;
- (id)filterICSData:(id)arg1;
- (_Bool)hasCalendarMetadata;
- (id)attachmentContentTypeForFileName:(id)arg1;
- (_Bool)isSinglePagePDFFile;
- (void)writeToDiskWithData:(id)arg1;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (_Bool)contentTypeConformsToVCard;
- (_Bool)contentTypeConformsToEvent;
- (_Bool)contentTypeConformsToProvisionment;
- (_Bool)contentTypeConformsToMarkup;
- (_Bool)contentTypeConformsToPassbook;
- (_Bool)contentTypeConformsToIWork;

@end
