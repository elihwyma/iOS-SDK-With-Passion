/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIViewElement;

@interface SKUIPageComponent : NSObject

{
    long long _metricsLocationPosition;
    SKUIViewElement *_viewElement;
}

@property (nonatomic, setter=_setMetricsLocationPosition:) long long metricsLocationPosition;
@property (nonatomic, readonly) SKUIViewElement *viewElement;
@property (nonatomic, readonly) long long componentType;
@property (nonatomic, readonly, getter=isMissingItemData) _Bool missingItemData;
@property (nonatomic, readonly) NSString *metricsElementName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)valueForMetricsField:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
