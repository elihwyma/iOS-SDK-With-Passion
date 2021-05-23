/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSDate, NSString;

@interface GEOCommuteNotificationDetails : NSObject <Swift>

{
    NSString *_title;
    NSString *_message;
    NSString *_commuteDetailsIdentifier;
    NSDate *_expirationDate;
    long long _score;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *message;
@property (copy, nonatomic, readonly) NSString *commuteDetailsIdentifier;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) long long score;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 commuteDetailsIdentifier:(id)arg3 expirationDate:(id)arg4 score:(long long)arg5;

@end
