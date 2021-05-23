/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, SKUIClientContext;

__attribute__((visibility("hidden")))
@interface SKUISettingsContext : NSObject

{
    NSMutableDictionary *_elementTypeClass;
    NSMutableArray *_descriptionReusePool;
    NSMutableArray *_viewReusePool;
    SKUIClientContext *_clientContext;
}

@property (weak, nonatomic) SKUIClientContext *clientContext;

- (id)initWithClientContext:(id)arg1;
- (id)dequeueReusableSettingDescriptionForViewElement:(id)arg1 parent:(id)arg2;
- (void)recycleSettingDescriptions:(id)arg1;
- (void)_registerReuseClasses;
- (id)_dequeueReusableSettingDescriptionWithReuseIdentifier:(id)arg1 forViewElement:(id)arg2 parent:(id)arg3;
- (void)_registerClass:(Class)arg1 forReuseIdentifier:(id)arg2;

@end
