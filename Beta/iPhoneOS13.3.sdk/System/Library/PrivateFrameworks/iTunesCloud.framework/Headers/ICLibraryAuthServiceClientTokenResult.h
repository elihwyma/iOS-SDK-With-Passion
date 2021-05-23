/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICLibraryAuthServiceClientTokenIdentifier, NSDate, NSString;

@interface ICLibraryAuthServiceClientTokenResult : NSObject <Swift>

{
    NSString *_token;
    long long _generatedAtMillis;
    long long _timeToLiveMillis;
    long long _lifespanMillis;
    ICLibraryAuthServiceClientTokenIdentifier *_tokenIdentitifer;
}

@property (copy, nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) long long generatedAtMillis;
@property (nonatomic, readonly) long long timeToLiveMillis;
@property (nonatomic, readonly) long long lifespanMillis;
@property (copy, nonatomic, readonly) ICLibraryAuthServiceClientTokenIdentifier *tokenIdentitifer;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) _Bool isExpired;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;

@end
