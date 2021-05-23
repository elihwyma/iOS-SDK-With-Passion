/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface _SFTabStateData : NSObject

{
    _Bool _showingReader;
    _Bool _displayingStandaloneImage;
    _Bool _wasOpenedFromLink;
    _Bool _privateBrowsing;
    _Bool _skipUpdate;
    _Bool _skipSavingSessionState;
    int _readingListBookmarkID;
    NSString *_UUIDString;
    NSString *_title;
    NSString *_url;
    NSString *_userVisibleURL;
    long long _orderIndex;
    double _lastViewedTime;
    long long _readerViewTopScrollOffset;
    NSData *_sessionStateData;
    long long _owningBrowserWindowDatabaseID;
    NSString *_owningBrowserWindowUUIDString;
    unsigned long long _uncompressedSessionStateDataSize;
}

@property (retain, nonatomic) NSString *UUIDString;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *userVisibleURL;
@property (nonatomic) long long orderIndex;
@property (nonatomic) double lastViewedTime;
@property (nonatomic) long long readerViewTopScrollOffset;
@property (nonatomic) _Bool showingReader;
@property (nonatomic) _Bool displayingStandaloneImage;
@property (nonatomic) int readingListBookmarkID;
@property (nonatomic) _Bool wasOpenedFromLink;
@property (nonatomic) _Bool privateBrowsing;
@property (retain, nonatomic) NSData *sessionStateData;
@property (nonatomic) long long owningBrowserWindowDatabaseID;
@property (copy, nonatomic) NSString *owningBrowserWindowUUIDString;
@property (nonatomic) _Bool skipUpdate;
@property (nonatomic) unsigned long long uncompressedSessionStateDataSize;
@property (nonatomic, readonly) _Bool isSessionStateDataCompressed;
@property (nonatomic, readonly) NSData *compressedSessionStateData;
@property (nonatomic) _Bool skipSavingSessionState;

+ (id)uncompressedDataWithRawData:(id)arg1 uncompressedSize:(unsigned long long)arg2;

- (id)initWithDictionary:(id)arg1;
- (id)toDictionary;
- (id)initWithSQLiteRow:(id)arg1;
- (void)_uncompressSessionStateDataIfNeeded;

@end
