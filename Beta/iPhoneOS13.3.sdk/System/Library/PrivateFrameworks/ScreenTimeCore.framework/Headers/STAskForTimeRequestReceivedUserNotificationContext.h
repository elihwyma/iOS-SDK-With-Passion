/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@class NSNumber, NSString;

@interface STAskForTimeRequestReceivedUserNotificationContext

{
    NSString *_childName;
    NSNumber *_childDSID;
}

@property (copy, nonatomic) NSString *childName;
@property (retain, nonatomic) NSNumber *childDSID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)customizeNotificationContent:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 childName:(id)arg2 childDSID:(id)arg3 requestedResourceName:(id)arg4;
- (void)_fetchAndWriteFamilyPhotoURLIfNeeded:(CDUnknownBlockType)arg1;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 familyMember:(id)arg2 requestedResourceName:(id)arg3;

@end
