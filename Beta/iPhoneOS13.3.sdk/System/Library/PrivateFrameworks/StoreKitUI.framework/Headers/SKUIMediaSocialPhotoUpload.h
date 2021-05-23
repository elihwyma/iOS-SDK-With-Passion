/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SKUIMediaSocialPhotoUpload : NSObject <Swift>

{
    _Bool _hasAlpha;
    unsigned long long _height;
    unsigned long long _length;
    NSString *_MD5;
    NSString *_token;
    NSString *_tokenType;
    NSString *_type;
    NSNumber *_uniqueIdentifier;
    unsigned long long _width;
}

@property (nonatomic) _Bool hasAlpha;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long length;
@property (copy, nonatomic) NSString *MD5;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *tokenType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSNumber *uniqueIdentifier;
@property (nonatomic) unsigned long long width;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUploadDictionary:(id)arg1;

@end
