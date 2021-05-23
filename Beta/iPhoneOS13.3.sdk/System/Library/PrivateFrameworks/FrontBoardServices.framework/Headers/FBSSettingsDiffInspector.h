/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject

{
    BSMutableSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    _Bool _iteratingObservers;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)inspectDiff:(id)arg1 withContext:(void *)arg2;
- (void)removeAllObservers;
- (void)observeOtherSetting:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_addObserver:(id)arg1 forSetting:(unsigned long long)arg2 inInfo:(id)arg3;
- (void)_observeSetting:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
