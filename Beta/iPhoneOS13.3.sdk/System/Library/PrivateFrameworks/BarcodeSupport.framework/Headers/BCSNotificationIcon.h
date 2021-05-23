/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol BCSAction;

__attribute__((visibility("hidden")))
@interface BCSNotificationIcon : NSObject

{
    id <BCSAction> _action;
}

@property (copy, nonatomic, readonly) NSURL *imageURL;

+ (id)nfcIcon;
+ (id)qrCodeIcon;

- (id)initWithAction:(id)arg1;
- (id)_notificationIconDataURLForApp:(id)arg1 scale:(float)arg2;
- (id)_notificationIconBaseURL;

@end
