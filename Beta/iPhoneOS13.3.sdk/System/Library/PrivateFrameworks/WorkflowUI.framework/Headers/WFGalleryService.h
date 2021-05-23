/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class ICApp, NSString, WFAccessResource, WFImage;

@interface WFGalleryService : NSObject

{
    NSString *_name;
    WFImage *_icon;
    ICApp *_app;
    WFAccessResource *_accessResource;
}

@property (nonatomic, readonly) ICApp *app;
@property (nonatomic, readonly) WFAccessResource *accessResource;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) WFImage *icon;

+ (id)serviceWithApp:(id)arg1;
+ (id)serviceWithAccessResource:(id)arg1;
+ (id)servicesForWorkflow:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)loadIconWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
