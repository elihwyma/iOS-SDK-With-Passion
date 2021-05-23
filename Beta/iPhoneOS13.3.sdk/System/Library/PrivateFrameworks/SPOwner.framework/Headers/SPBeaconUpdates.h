/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SPBeaconUpdates : NSObject

{
    NSString *_name;
    long long _roleId;
    NSString *_emoji;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long roleId;
@property (copy, nonatomic) NSString *emoji;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 roleId:(long long)arg2;

@end
