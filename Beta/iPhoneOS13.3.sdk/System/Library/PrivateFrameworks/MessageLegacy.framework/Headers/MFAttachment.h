/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class MFAttachmentManager, MFAttachmentPlaceholder, MFMimePart, NSProgress, NSString, NSURL;

@protocol MFDataConsumer;

@interface MFAttachment : NSObject

{
    MFAttachmentManager *_attachmentManager;
    _Bool _isDataAvailableLocally;
    MFAttachmentPlaceholder *_placeholder;
    NSProgress *_downloadProgress;
    _Bool _isAutoArchive;
    _Bool _wantsCompletionBlockOffMainThread;
    NSURL *_url;
    MFMimePart *_part;
    NSString *_disposition;
    CDUnknownBlockType _fetchCompletionBlock;
    id <MFDataConsumer> _customConsumer;
    unsigned long long _lastProgressBytes;
    double _lastProgressTime;
}

@property (nonatomic) MFAttachmentManager *attachmentManager;
@property (readonly) _Bool isContainedInRFC822;
@property (readonly) _Bool isContainedInCompose;
@property (copy) NSString *contentID;
@property (retain, nonatomic) NSProgress *downloadProgress;
@property (nonatomic) unsigned long long lastProgressBytes;
@property (nonatomic) double lastProgressTime;
@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) MFMimePart *part;
@property (copy, nonatomic) NSString *fileName;
@property (readonly) NSString *path;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *disposition;
@property (copy, nonatomic) NSString *remoteImageFileName;
@property (nonatomic) unsigned long long decodedFileSize;
@property (nonatomic) unsigned long long encodedFileSize;
@property (readonly) _Bool isDataAvailableLocally;
@property (readonly) NSString *inferredMimeType;
@property (readonly) NSString *fileUTType;
@property (readonly) _Bool isAutoArchive;
@property _Bool isPlaceholder;
@property (retain, nonatomic) MFAttachmentPlaceholder *placeholder;
@property (copy, nonatomic) CDUnknownBlockType fetchCompletionBlock;
@property (retain, nonatomic) id <MFDataConsumer> customConsumer;
@property (nonatomic) _Bool wantsCompletionBlockOffMainThread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)cancel;
- (id)fileAttributes;
- (id)fileURL;
- (_Bool)conformsToType:(id)arg1;
- (_Bool)isAvailable;
- (void)fetchData;
- (_Bool)isCached;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)_dataProvider;
- (_Bool)isImageFile;
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
- (unsigned long long)sizeOnDisk;
- (id)textEncodingGuessWithData:(id)arg1;
- (_Bool)contentTypeConformsToEventICS;
- (id)initWithURL:(id)arg1 attachmentManager:(id)arg2;
- (id)decodeFilterWithDataConsumer:(id)arg1;
- (id)fetchDataToURL:(id *)arg1;
- (_Bool)isMailDropPhotoArchive;
- (id)filterICSData:(id)arg1;
- (id)attachmentContentTypeForFileName:(id)arg1;
- (void)writeToDiskWithData:(id)arg1;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (_Bool)contentTypeConformsToVCard;
- (_Bool)contentTypeConformsToEvent;
- (_Bool)contentTypeConformsToProvisionment;
- (_Bool)contentTypeConformsToMarkup;
- (_Bool)contentTypeConformsToPassbook;
- (_Bool)contentTypeConformsToIWork;
- (void)resetProgress;
- (void)updateProgressWithCurrentBytes:(unsigned long long)arg1;

@end
