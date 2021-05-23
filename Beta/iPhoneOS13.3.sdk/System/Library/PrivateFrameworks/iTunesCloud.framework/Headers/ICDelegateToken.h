/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSData, NSDate;

@interface ICDelegateToken : NSObject <Swift>

{
    NSData *_data;
    long long _type;
    NSDate *_expirationDate;
}

@property (copy, nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 data:(id)arg2;
- (id)initWithType:(long long)arg1 data:(id)arg2 expirationDate:(id)arg3;
- (_Bool)expiresBeforeDate:(id)arg1;

@end
