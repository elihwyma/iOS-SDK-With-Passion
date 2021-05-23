/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSData, NSString, NSURL;

@interface PKPaymentSetupMoreInfoItem : NSObject

{
    NSString *_title;
    NSString *_body;
    NSString *_linkText;
    NSURL *_linkURL;
    NSURL *_imageURL;
    NSData *_imageData;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *body;
@property (copy, nonatomic, readonly) NSString *linkText;
@property (copy, nonatomic, readonly) NSURL *linkURL;
@property (copy, nonatomic, readonly) NSURL *imageURL;
@property (copy, nonatomic) NSData *imageData;

- (id)initWithMoreInfoDictionary:(id)arg1 imageData:(id)arg2;
- (id)initWithMoreInfoDictionary:(id)arg1;

@end
