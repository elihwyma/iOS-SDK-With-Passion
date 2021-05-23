/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, NSURL, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingAffiliationItem : NSObject <Swift>

{
    UIColor *_fillColor;
    NSString *_identifier;
    NSString *_imageName;
    NSString *_imageTreatment;
    NSURL *_imageURL;
    NSString *_title;
    long long _userAffinityCount;
}

@property (copy, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *imageTreatment;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long userAffinityCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
