/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSString;

@interface SKUIQuicklinksPageComponent : SKUIPageComponent

{
    NSArray *_links;
    NSString *_title;
}

@property (nonatomic, readonly) NSArray *links;
@property (nonatomic, readonly) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)componentType;
- (id)valueForMetricsField:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)metricsElementName;
- (void)_setLinksWithLinksArray:(id)arg1 context:(id)arg2;

@end
