/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface WLKServerConfigurationResponse : NSObject

{
    NSDictionary *_responseDictionary;
    NSDate *_expirationDate;
    unsigned long long _environmentHash;
    NSDictionary *_endpointsDictionary;
}

@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) unsigned long long environmentHash;
@property (nonatomic, readonly) NSDictionary *endpointsDictionary;
@property (nonatomic, readonly) NSDictionary *requiredRequestKeyValuePairsDictionary;
@property (nonatomic, readonly) NSString *vppaStatusString;
@property (nonatomic, readonly) long long vppaStatus;
@property (nonatomic, readonly) NSURL *playActivityURL;
@property (nonatomic, readonly) NSDictionary *features;
@property (copy, nonatomic, readonly) NSString *utsk;
@property (nonatomic, readonly, getter=isActiveUser) _Bool activeUser;
@property (copy, nonatomic, readonly) NSNumber *vppaSessionDurationInMillis;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3;
- (_Bool)isValidIgnoringExpiration;
- (id)utsc;

@end
