/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate;

@interface SPRawSearchResult : NSObject

{
    NSData *_hashedPublicKey;
    NSData *_publicKey;
    long long _status;
    NSDate *_timestamp;
    double _latitude;
    double _longitude;
    double _horizontalAccuracy;
}

@property (copy, nonatomic, readonly) NSData *hashedPublicKey;
@property (copy, nonatomic, readonly) NSData *publicKey;
@property (nonatomic, readonly) long long status;
@property (copy, nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) double horizontalAccuracy;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHashedPublicKey:(id)arg1 publicKey:(id)arg2 status:(long long)arg3 timestamp:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 horizontalAccuracy:(double)arg7;

@end
