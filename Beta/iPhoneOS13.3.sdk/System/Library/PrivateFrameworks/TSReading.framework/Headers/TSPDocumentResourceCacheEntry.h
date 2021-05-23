/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface TSPDocumentResourceCacheEntry : NSObject

{
    _Bool _wasDownloaded;
    NSString *_digestString;
    long long _accessCount;
    NSURL *_URL;
    long long _fileSize;
    NSDate *_contentAccessDate;
}

@property (nonatomic, readonly) NSString *digestString;
@property (nonatomic) long long accessCount;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) long long fileSize;
@property (retain, nonatomic) NSDate *contentAccessDate;
@property (nonatomic) _Bool wasDownloaded;

- (id)init;
- (id)initWithDigestString:(id)arg1;

@end
