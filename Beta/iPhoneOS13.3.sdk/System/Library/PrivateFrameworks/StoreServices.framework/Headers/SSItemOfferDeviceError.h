/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface SSItemOfferDeviceError : NSObject

{
    NSString *_localizedMessage;
    NSString *_localizedTitle;
    NSString *_localizedURLTitle;
    NSURL *_url;
}

@property (nonatomic, readonly) NSString *localizedMessage;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedURLTitle;
@property (nonatomic, readonly) NSURL *URL;

- (void)dealloc;
- (id)_initWithMessage:(id)arg1 title:(id)arg2 URLTitle:(id)arg3 URL:(id)arg4;

@end
