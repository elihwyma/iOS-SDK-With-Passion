/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString;

@interface SKUIApplicationLicensePage : NSObject <Swift>

{
    NSString *_licenseAgreementHTML;
    NSString *_title;
}

@property (copy, nonatomic) NSString *licenseAgreementHTML;
@property (copy, nonatomic) NSString *title;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
