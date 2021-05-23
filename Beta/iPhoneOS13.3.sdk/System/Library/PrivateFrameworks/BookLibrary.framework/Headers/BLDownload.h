/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSNumber, NSString;

@interface BLDownload : NSObject

{
    NSString *_downloadID;
    NSString *_url;
    NSString *_targetDownloadDirectory;
    long long _state;
    NSDate *_startTime;
    NSString *_assetPath;
    NSString *_buyParameters;
    NSString *_permlink;
    NSNumber *_storeIdentifier;
    NSString *_clientIdentifier;
    NSNumber *_persistentIdentifier;
    NSString *_transactionIdentifier;
    NSString *_cancelDownloadURL;
    unsigned long long _fileSize;
    NSDate *_lastStateChangeTime;
    NSString *_hashType;
    NSString *_md5HashStrings;
    long long _numberOfBytesToHash;
    NSNumber *_publicationVersion;
    NSNumber *_isAutomaticDownload;
    NSNumber *_isRestore;
    NSString *_downloadKey;
    NSNumber *_accountID;
    NSNumber *_isZipStreamable;
    NSData *_dpInfo;
    NSNumber *_isSample;
    NSNumber *_isPurchase;
    NSDate *_purchaseDate;
    NSNumber *_isLocalCacheServer;
    NSString *_originalURL;
    NSString *_artistName;
    NSString *_title;
    NSString *_subtitle;
    NSString *_genre;
    NSString *_kind;
    NSString *_thumbnailImageURL;
}

@property (copy, nonatomic) NSString *downloadID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *targetDownloadDirectory;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSDate *startTime;
@property (copy, nonatomic) NSString *assetPath;
@property (copy, nonatomic) NSString *buyParameters;
@property (copy, nonatomic) NSString *permlink;
@property (retain, nonatomic) NSNumber *storeIdentifier;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSNumber *persistentIdentifier;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSString *cancelDownloadURL;
@property (nonatomic) unsigned long long fileSize;
@property (copy, nonatomic) NSDate *lastStateChangeTime;
@property (copy, nonatomic) NSString *hashType;
@property (copy, nonatomic) NSString *md5HashStrings;
@property (nonatomic) long long numberOfBytesToHash;
@property (copy, nonatomic) NSNumber *publicationVersion;
@property (nonatomic) NSNumber *isAutomaticDownload;
@property (copy, nonatomic) NSNumber *isRestore;
@property (copy, nonatomic) NSString *downloadKey;
@property (copy, nonatomic) NSNumber *accountID;
@property (copy, nonatomic) NSNumber *isZipStreamable;
@property (copy, nonatomic) NSData *dpInfo;
@property (retain, nonatomic) NSNumber *isSample;
@property (retain, nonatomic) NSNumber *isPurchase;
@property (retain, nonatomic) NSDate *purchaseDate;
@property (retain, nonatomic) NSNumber *isLocalCacheServer;
@property (copy, nonatomic) NSString *originalURL;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *thumbnailImageURL;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)transferProgressFraction;

@end
