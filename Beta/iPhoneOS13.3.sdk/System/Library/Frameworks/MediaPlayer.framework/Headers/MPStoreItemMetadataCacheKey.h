/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSNumber, NSString;

@interface MPStoreItemMetadataCacheKey : NSObject <Swift>

{
    _Bool _personalized;
    NSNumber *_accountIdentifier;
    NSNumber *_enqueuerAccountIdentifier;
    NSString *_storefrontIdentifier;
}

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSNumber *enqueuerAccountIdentifier;
@property (nonatomic, getter=isPersonalized) _Bool personalized;
@property (copy, nonatomic) NSString *storefrontIdentifier;

+ (void)getCacheKeyWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_fastGetCacheKeyWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_slowGetCacheKeyWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 response:(id)arg2;
- (_Bool)_isGoodCacheKey;

@end
