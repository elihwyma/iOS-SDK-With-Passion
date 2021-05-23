/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@class NSString;

@interface STAskForTimeApprovedResponseReceivedUserNotificationContext

{
    NSString *_parentName;
    NSString *_requestedResourceName;
    double _amountGranted;
}

@property (copy, nonatomic) NSString *parentName;
@property (copy, nonatomic) NSString *requestedResourceName;
@property (nonatomic) double amountGranted;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 parentName:(id)arg2 requestedResourceName:(id)arg3 amountGranted:(double)arg4;

@end
