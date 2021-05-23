/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@interface PKPaymentSetupProductImageAssets : NSObject

{
    struct CGImage *_digitalCardImage;
    struct CGImage *_plasticCardImage;
    struct CGImage *_thumbnailImage;
    struct CGImage *_logoImage;
}

@property (nonatomic) struct CGImage *digitalCardImage;
@property (nonatomic) struct CGImage *plasticCardImage;
@property (nonatomic) struct CGImage *thumbnailImage;
@property (nonatomic) struct CGImage *logoImage;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
