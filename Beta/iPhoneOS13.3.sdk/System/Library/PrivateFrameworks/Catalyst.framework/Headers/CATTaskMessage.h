/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATMessage.h>

@class NSUUID;

@interface CATTaskMessage : CATMessage

{
    NSUUID *_taskUUID;
}

@property (copy, nonatomic) NSUUID *taskUUID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1;

@end
