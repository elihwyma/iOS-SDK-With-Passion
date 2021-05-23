/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray, NSNumber, NSString;

@interface ASDPurgeAppsRequestOptions : ASDRequestOptions

{
    _Bool _offloadOnly;
    _Bool _performAvailablityCheck;
    NSArray *_apps;
    NSNumber *_desiredPurgeAmount;
    long long _urgency;
    NSString *_volume;
}

@property (copy, nonatomic) NSArray *apps;
@property (copy, nonatomic) NSNumber *desiredPurgeAmount;
@property (nonatomic) _Bool offloadOnly;
@property (nonatomic) _Bool performAvailablityCheck;
@property (nonatomic) long long urgency;
@property (copy, nonatomic) NSString *volume;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVolume:(id)arg1 urgency:(long long)arg2;

@end
