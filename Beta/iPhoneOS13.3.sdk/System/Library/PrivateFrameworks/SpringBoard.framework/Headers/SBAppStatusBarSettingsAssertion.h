/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSDate, NSString, SBAppStatusBarSettings;

@interface SBAppStatusBarSettingsAssertion : NSObject <Swift>

{
    SBAppStatusBarSettings *_settings;
    unsigned long long _level;
    NSString *_reason;
    NSDate *_timestamp;
}

@property (nonatomic, readonly) unsigned long long level;
@property (copy, nonatomic, readonly) SBAppStatusBarSettings *settings;
@property (copy, nonatomic, readonly) NSString *reason;
@property (copy, nonatomic, readonly) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)acquire;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithStatusBarHidden:(_Bool)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (id)initWithSettings:(id)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (void)modifySettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)acquireWithAnimationParameters:(id)arg1;
- (void)invalidateWithAnimationParameters:(id)arg1;
- (void)modifySettingsWithBlock:(CDUnknownBlockType)arg1 animationParameters:(id)arg2;

@end
