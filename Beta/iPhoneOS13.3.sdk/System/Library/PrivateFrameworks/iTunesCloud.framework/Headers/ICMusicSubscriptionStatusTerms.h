/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@interface ICMusicSubscriptionStatusTerms : NSObject <Swift>

{
    long long _acceptedVersion;
    long long _currentVersion;
    long long _sourceType;
    long long _type;
}

@property (nonatomic, readonly) long long acceptedVersion;
@property (nonatomic, readonly) long long currentVersion;
@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly) long long type;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseTermsDictionary:(id)arg1;

@end
