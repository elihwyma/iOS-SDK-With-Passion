/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSMutableSettings, NSString;

@interface SBProcessSettings : NSObject <Swift>

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
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
- (void)clearProcessSettings;
- (void)applyProcessSettings:(id)arg1;
- (long long)flagForProcessSetting:(long long)arg1;
- (_Bool)boolForProcessSetting:(long long)arg1;
- (id)objectForProcessSetting:(long long)arg1;
- (id)copyProcessSettings;

@end
