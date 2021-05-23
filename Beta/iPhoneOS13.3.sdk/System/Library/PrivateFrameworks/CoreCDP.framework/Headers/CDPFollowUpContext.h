/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CDPFollowUpContext : NSObject

{
    unsigned long long _repairType;
    _Bool _shouldNotify;
    _Bool _force;
    NSString *_followUpType;
}

@property (nonatomic) unsigned long long repairType;
@property (copy, nonatomic) NSString *followUpType;
@property (nonatomic) _Bool shouldNotify;
@property (nonatomic) _Bool force;

+ (_Bool)supportsSecureCoding;
+ (id)contextForStateRepair;
+ (id)contextWithType:(id)arg1;
+ (id)contextForOfflinePasscodeChange;
+ (id)contextForRecoveryKeyRepair;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
