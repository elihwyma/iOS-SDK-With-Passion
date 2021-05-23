/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSURL;

@interface PKPaymentSetupProductImageAssetURLs : NSObject

{
    NSURL *_digitalCardImageUrl;
    NSURL *_thumbnailImageUrl;
    NSURL *_logoImageUrl;
}

@property (nonatomic, readonly) NSURL *digitalCardImageUrl;
@property (nonatomic, readonly) NSURL *thumbnailImageUrl;
@property (nonatomic, readonly) NSURL *logoImageUrl;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageAssetsDictionary:(id)arg1;

@end
