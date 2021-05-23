/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@interface PXGNamedImageViewConfiguration : NSObject <Swift>

{
    NSString *_imageName;
    long long _contentMode;
}

@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) long long contentMode;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
