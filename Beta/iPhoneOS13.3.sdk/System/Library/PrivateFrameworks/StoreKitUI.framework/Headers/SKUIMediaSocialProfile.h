/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, NSURL;

@interface SKUIMediaSocialProfile : NSObject <Swift>

{
    NSURL *_backgroundImageURL;
    NSString *_bio;
    NSString *_handle;
    NSString *_identifier;
    NSString *_name;
    NSString *_profileType;
    NSURL *_profileImageURL;
}

@property (copy, nonatomic) NSURL *backgroundImageURL;
@property (copy, nonatomic) NSString *bio;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *profileImageURL;
@property (copy, nonatomic) NSString *profileType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProfileDictionary:(id)arg1;

@end
