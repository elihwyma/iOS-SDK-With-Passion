/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATTaskMessage.h>

@class CATTaskRequest;

@interface CATTaskMessageStart : CATTaskMessage

{
    CATTaskRequest *_request;
}

@property (retain, nonatomic) CATTaskRequest *request;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 request:(id)arg2;

@end
