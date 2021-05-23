/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface BBImage : NSObject

{
    NSData *_data;
    NSString *_path;
    NSString *_name;
    NSString *_bundlePath;
}

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundlePath;

+ (_Bool)supportsSecureCoding;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithPath:(id)arg1;
+ (id)imageWithName:(id)arg1 inBundlePath:(id)arg2;
+ (id)imageWithName:(id)arg1 inBundle:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithData:(id)arg1 path:(id)arg2 name:(id)arg3 bundlePath:(id)arg4;

@end
