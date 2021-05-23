/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <BarcodeSupport/BCSActionPickerItem.h>

@class LSAppLink, LSApplicationProxy, NSURL;

@protocol BCSCodePayload;

__attribute__((visibility("hidden")))
@interface BCSURLActionPickerItem : BCSActionPickerItem

{
    NSURL *_url;
    LSApplicationProxy *_applicationProxy;
    LSAppLink *_appLink;
    id <BCSCodePayload> _codePayload;
}

@property (nonatomic, readonly) LSAppLink *appLink;
@property (nonatomic, readonly) id <BCSCodePayload> codePayload;

- (void)performAction;
- (id)actionURL;
- (id)targetApplicationBundleIdentifier;
- (void)performActionWithFBOptions:(id)arg1;
- (id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationProxy:(id)arg4;
- (id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4;

@end
