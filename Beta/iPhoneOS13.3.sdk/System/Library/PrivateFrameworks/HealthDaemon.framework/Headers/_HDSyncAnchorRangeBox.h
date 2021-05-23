/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface _HDSyncAnchorRangeBox : NSObject <Swift>

{
    struct HDSyncAnchorRange _anchorRange;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHDSyncAnchorRange:(struct HDSyncAnchorRange)arg1;
- (struct HDSyncAnchorRange)anchorRange;

@end
