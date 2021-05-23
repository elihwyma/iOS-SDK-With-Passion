/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSNumber, NSString;

@interface ICMusicSubscriptionStatusCacheKey : NSObject <Swift>

{
    NSNumber *_DSID;
    NSString *_phoneNumber;
    NSString *_storefrontIdentifier;
}

@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *storefrontIdentifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringRepresentation;
- (id)initWithStringRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 requiringDSID:(_Bool)arg2;
- (id)dictionaryRepresentationIncludingDSID:(_Bool)arg1;

@end
