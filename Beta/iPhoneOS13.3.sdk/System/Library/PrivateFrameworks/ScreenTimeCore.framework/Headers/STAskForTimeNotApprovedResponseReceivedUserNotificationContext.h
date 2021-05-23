/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@class NSString;

@interface STAskForTimeNotApprovedResponseReceivedUserNotificationContext

{
    NSString *_parentName;
    NSString *_requestedResourceName;
}

@property (copy, nonatomic) NSString *parentName;
@property (copy, nonatomic) NSString *requestedResourceName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 parentName:(id)arg2 requestedResourceName:(id)arg3;

@end
