/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface SKUIMediaSocialAuthor : NSObject <Swift>

{
    NSString *_authorType;
    NSString *_dsid;
    NSString *_identifier;
    NSString *_name;
    NSArray *_permissions;
    NSDictionary *_storePlatformData;
    NSURL *_thumbnailImageURL;
}

@property (copy, nonatomic) NSString *authorType;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *permissions;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *storePlatformData;
@property (copy, nonatomic) NSURL *thumbnailImageURL;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAuthorDictionary:(id)arg1;

@end
