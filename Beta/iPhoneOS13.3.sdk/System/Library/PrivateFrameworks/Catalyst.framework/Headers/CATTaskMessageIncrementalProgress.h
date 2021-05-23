/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATTaskMessage.h>

@interface CATTaskMessageIncrementalProgress : CATTaskMessage

{
    long long _completedUnitCount;
    long long _totalUnitCount;
}

@property (nonatomic) long long completedUnitCount;
@property (nonatomic) long long totalUnitCount;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3;

@end
