/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface BBAccessoryIcon : NSObject

{
    NSMutableDictionary *_imagesForContentSize;
}

@property (copy, nonatomic) NSDictionary *imagesForContentSize;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addImage:(id)arg1 forContentSizeCategory:(id)arg2;
- (id)imageForContentSizeCategory:(id)arg1;

@end
