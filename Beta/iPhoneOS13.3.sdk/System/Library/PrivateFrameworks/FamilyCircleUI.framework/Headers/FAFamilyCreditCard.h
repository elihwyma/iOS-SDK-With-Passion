/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, UIImage;

@interface FAFamilyCreditCard : NSObject

{
    NSString *_details;
    NSString *_footer;
    NSString *_providerDescription;
    NSString *_type;
    NSString *_usageNotice;
    NSURL *_imageURL;
    UIImage *_image;
}

@property (copy, nonatomic) NSString *details;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSString *providerDescription;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *usageNotice;
@property (copy, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *image;

@end
