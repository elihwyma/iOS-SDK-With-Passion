/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface BLDownloadStatus : NSObject

{
    _Bool _isAudiobook;
    _Bool _isRestore;
    _Bool _isSample;
    _Bool _isPurchase;
    _Bool _canPause;
    NSNumber *_storeID;
    NSString *_permLink;
    NSString *_downloadID;
    NSNumber *_percentComplete;
    NSNumber *_estimatedTimeRemaining;
    NSNumber *_transferBytesWritten;
    NSNumber *_transferBytesExpected;
    long long _downloadPhase;
    NSDate *_purchaseDate;
    long long _persistentIdentifier;
    NSNumber *_storeAccountIdentifier;
    NSString *_artistName;
    NSString *_title;
    NSString *_subtitle;
    NSString *_genre;
    NSString *_thumbnailImageURL;
    NSString *_assetKind;
}

@property (retain, nonatomic) NSNumber *storeID;
@property (copy, nonatomic) NSString *permLink;
@property (copy, nonatomic) NSString *downloadID;
@property (retain, nonatomic) NSNumber *percentComplete;
@property (retain, nonatomic) NSNumber *estimatedTimeRemaining;
@property (retain, nonatomic) NSNumber *transferBytesWritten;
@property (retain, nonatomic) NSNumber *transferBytesExpected;
@property (nonatomic) long long downloadPhase;
@property (nonatomic) _Bool isAudiobook;
@property (nonatomic) _Bool isRestore;
@property (nonatomic) _Bool canPause;
@property (nonatomic) _Bool isSample;
@property (nonatomic) _Bool isPurchase;
@property (retain, nonatomic) NSDate *purchaseDate;
@property (nonatomic) long long persistentIdentifier;
@property (retain, nonatomic) NSNumber *storeAccountIdentifier;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *thumbnailImageURL;
@property (copy, nonatomic) NSString *assetKind;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
