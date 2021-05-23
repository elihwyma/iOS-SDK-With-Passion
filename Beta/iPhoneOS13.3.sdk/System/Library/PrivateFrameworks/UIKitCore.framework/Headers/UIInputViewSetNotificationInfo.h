/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIInputViewSetNotificationInfo : NSObject

{
    _Bool _changedAccessoryOnly;
    _Bool _assistantOnScreenOnly;
    _Bool _forceNotification;
    _Bool _wasCausedRemotely;
    _Bool _dueToRotation;
    double _duration;
    unsigned long long _options;
    struct CGPoint _beginCenter;
    struct CGPoint _endCenter;
    struct CGRect _beginFrame;
    struct CGRect _endFrame;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSDictionary *privateUserInfo;
@property (nonatomic) struct CGRect beginFrame;
@property (nonatomic) struct CGRect endFrame;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long options;
@property (nonatomic) _Bool changedAccessoryOnly;
@property (nonatomic) _Bool assistantOnScreenOnly;
@property (nonatomic) _Bool forceNotification;
@property (nonatomic) _Bool wasCausedRemotely;
@property (nonatomic) _Bool dueToRotation;
@property (nonatomic) struct CGPoint beginCenter;
@property (nonatomic) struct CGPoint endCenter;
@property (nonatomic) struct CGRect bounds;

+ (id)info;

- (id)init;
- (void)populateStartInfoWithFrame:(struct CGRect)arg1;
- (void)populateEndInfoWithFrame:(struct CGRect)arg1;
- (id)inverseInfo;
- (id)rotationUserInfo;
- (void)logGeometry;
- (_Bool)containsChange;
- (void)populateWithAnimationStyle:(id)arg1;

@end
