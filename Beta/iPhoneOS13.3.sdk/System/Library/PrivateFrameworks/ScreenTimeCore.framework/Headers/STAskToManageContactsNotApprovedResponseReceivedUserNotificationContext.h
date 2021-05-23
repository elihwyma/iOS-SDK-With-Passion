/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@class NSString;

@interface STAskToManageContactsNotApprovedResponseReceivedUserNotificationContext

{
    NSString *_childName;
}

@property (copy, nonatomic) NSString *childName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithChildName:(id)arg1;

@end
