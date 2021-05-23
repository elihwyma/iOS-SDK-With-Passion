/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface SSItemMedia : NSObject

{
    long long _duration;
    long long _fullDuration;
    long long _mediaFileSize;
    NSString *_mediaKind;
    _Bool _protected;
    NSURL *_url;
}

@property (nonatomic, readonly) long long fullDurationInMilliseconds;
@property (nonatomic, readonly) long long mediaFileSize;
@property (copy, nonatomic) NSString *mediaKind;
@property (nonatomic, readonly) long long durationInMilliseconds;
@property (nonatomic, readonly, getter=isProtectedMedia) _Bool protectedMedia;
@property (nonatomic, readonly) NSURL *URL;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStoreOfferDictionary:(id)arg1;

@end
