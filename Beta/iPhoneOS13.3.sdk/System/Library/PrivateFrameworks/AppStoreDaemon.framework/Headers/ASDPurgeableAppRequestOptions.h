/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSString;

@interface ASDPurgeableAppRequestOptions : ASDRequestOptions

{
    _Bool _performAvailablityCheck;
    long long _urgency;
    NSString *_volume;
}

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
