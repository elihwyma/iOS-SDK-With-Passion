/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject

{
    NSData *_imageData;
    NSString *_imageCacheKey;
    unsigned long long _startTimeInMilliseconds;
    NSString *_title;
    NSURL *_url;
    NSString *_urlTitle;
}

@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imageCacheKey;
@property (nonatomic) unsigned long long startTimeInMilliseconds;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *URLTitle;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)normalizeProperties;
- (_Bool)isEqualIgnoringTimesAndTitle:(id)arg1;

@end
