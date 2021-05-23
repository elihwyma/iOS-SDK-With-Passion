/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface BBSectionIconVariant : NSObject

{
    _Bool _precomposed;
    long long _format;
    NSData *_imageData;
    NSString *_imagePath;
    NSString *_imageName;
    NSString *_bundlePath;
    NSString *_applicationIdentifier;
}

@property (nonatomic) long long format;
@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic, getter=isPrecomposed) _Bool precomposed;

+ (_Bool)supportsSecureCoding;
+ (id)_variantWithFormat:(long long)arg1;
+ (id)variantWithFormat:(long long)arg1 imageData:(id)arg2;
+ (id)variantWithFormat:(long long)arg1 imagePath:(id)arg2;
+ (id)variantWithFormat:(long long)arg1 imageName:(id)arg2 inBundle:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
