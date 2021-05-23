/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSMutableSettings, NSString;

@interface SBActivationSettings : NSObject <Swift>

{
    BSMutableSettings *_settings;
}

@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)applyActivationSettings:(id)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (id)copyActivationSettings;
- (void)clearActivationSettings;
- (id)copyActivationSettingsPassingFilter:(CDUnknownBlockType)arg1;

@end
