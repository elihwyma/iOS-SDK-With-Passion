/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATMessage.h>

@class NSDictionary, NSString, NSUUID;

@interface CATNotificationMessage : CATMessage

{
    NSUUID *_taskUUID;
    NSString *_name;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic) NSUUID *taskUUID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;
- (id)initWithTaskUUID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;

@end
