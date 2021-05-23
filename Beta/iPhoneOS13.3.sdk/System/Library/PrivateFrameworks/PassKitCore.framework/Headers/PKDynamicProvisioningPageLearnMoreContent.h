/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface PKDynamicProvisioningPageLearnMoreContent : NSObject

{
    NSString *_buttonTitle;
    NSURL *_buttonURL;
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    NSString *_bussinessChatButtonTitle;
    NSString *_bussinesChatIntentName;
}

@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSURL *buttonURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *bussinessChatButtonTitle;
@property (copy, nonatomic) NSString *bussinesChatIntentName;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictonary:(id)arg1;

@end
