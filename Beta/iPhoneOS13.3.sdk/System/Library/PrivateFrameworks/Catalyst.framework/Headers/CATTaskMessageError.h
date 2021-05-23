/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATTaskMessage.h>

@class NSError;

@interface CATTaskMessageError : CATTaskMessage

{
    NSError *_taskError;
}

@property (retain, nonatomic) NSError *taskError;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 taskError:(id)arg2;

@end
