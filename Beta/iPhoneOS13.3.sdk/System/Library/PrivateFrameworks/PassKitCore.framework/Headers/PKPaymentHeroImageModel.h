/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface PKPaymentHeroImageModel : NSObject

{
    NSURL *_url;
    NSString *_imageSha;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *imageSha;

- (id)initWithDictionary:(id)arg1;

@end
