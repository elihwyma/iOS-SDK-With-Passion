/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface BLBookItem : NSObject

{
    _Bool _sample;
    _Bool _iTunesU;
    NSString *_temporaryIdentifier;
    NSString *_legacyUniqueIdentifier;
    NSString *_storeIdentifier;
    NSString *_persistentIdentifier;
    NSString *_publisherIdentifier;
    NSString *_title;
    NSString *_author;
    NSString *_feedURL;
    NSURL *_fileURL;
    NSURL *_permlink;
    long long _type;
    NSString *_publicationVersion;
    NSString *_album;
    NSString *_folderName;
    NSDictionary *_entry;
    NSString *_identifier;
    long long _purgePriority;
    NSDate *_lastUserAccessDate;
    NSString *_itunesuAssetID;
    NSString *_coverImagePath;
}

@property (retain, nonatomic) NSDictionary *entry;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *temporaryIdentifier;
@property (copy, nonatomic) NSString *legacyUniqueIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (copy, nonatomic) NSString *publisherIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *feedURL;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSURL *permlink;
@property (nonatomic) _Bool iTunesU;
@property (nonatomic, getter=isSample) _Bool sample;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *publicationVersion;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *folderName;
@property (nonatomic) long long purgePriority;
@property (retain, nonatomic) NSDate *lastUserAccessDate;
@property (copy, nonatomic) NSString *itunesuAssetID;
@property (copy, nonatomic) NSString *coverImagePath;
@property (copy, nonatomic, readonly) NSString *mimeType;
@property (nonatomic, readonly) NSString *path;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setFileURL:(id)arg1;
- (id)initWithEntry:(id)arg1 basePath:(id)arg2;
- (id)initWithStoreDownload:(id)arg1 permlink:(id)arg2 title:(id)arg3;
- (id)initWithEduCloudData:(id)arg1 path:(id)arg2;
- (void)_setCloudCoverImageData:(id)arg1;
- (id)_cloudDictionaryRepresentation;
- (id)initWithPeristentIdentifier:(id)arg1 permlink:(id)arg2 title:(id)arg3;
- (id)_cloudCoverImageData;

@end
