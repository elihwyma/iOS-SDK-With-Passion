/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class NSData, NSDate, NSString;

@interface UIActivityContinuationAction : BSAction

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *activityTypeIdentifier;
@property (nonatomic, readonly) NSString *originatingDeviceType;
@property (nonatomic, readonly) NSString *originatingDeviceName;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSDate *lastUpdateTime;
@property (nonatomic, readonly) NSData *userActivityData;

- (id)initWithSettings:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;

@end
