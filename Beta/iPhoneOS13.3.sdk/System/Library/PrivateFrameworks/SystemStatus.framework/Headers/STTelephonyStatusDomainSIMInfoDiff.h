/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <Foundation/NSObject.h>

#import <SystemStatus/Swift-Protocol.h>

@class BSSettings, NSString;

@interface STTelephonyStatusDomainSIMInfoDiff : NSObject <Swift>

{
    BSSettings *_changes;
}

@property (copy, nonatomic, readonly) BSSettings *changes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)diffFromInfo:(id)arg1 toInfo:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChanges:(id)arg1;
- (void)applyToMutableInfo:(id)arg1;
- (id)infoByApplyingToInfo:(id)arg1;

@end
