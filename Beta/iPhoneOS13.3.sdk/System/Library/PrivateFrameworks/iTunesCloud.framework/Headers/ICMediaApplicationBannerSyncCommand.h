/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICMediaApplicationBanner, NSDictionary;

@interface ICMediaApplicationBannerSyncCommand : NSObject <Swift>

{
    NSDictionary *_responseDictionary;
    long long _commandType;
    ICMediaApplicationBanner *_banner;
    unsigned long long _serialNumber;
}

@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) long long commandType;
@property (nonatomic, readonly) ICMediaApplicationBanner *banner;
@property (nonatomic, readonly) unsigned long long serialNumber;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (id)_nameForCommandType:(long long)arg1;

@end
