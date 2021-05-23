/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISettingDescription.h>

@class NSOperationQueue, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIProfileSettingDescription : SKUISettingDescription

{
    NSString *_handle;
    NSString *_name;
    NSOperationQueue *_operationQueue;
    UIImage *_photo;
}

@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIImage *photo;

+ (Class)_viewClassForSettingDescription:(id)arg1;

- (void)dealloc;
- (void)reloadData;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (void)_fetchAccountInfo;
- (void)_fetchProfilePhoto;

@end
