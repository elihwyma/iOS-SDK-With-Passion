/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface MBFileInfo : NSObject

{
    _Bool _isDirectory;
    NSString *_path;
    long long _priority;
    NSDictionary *_extendedAttributes;
}

@property (copy, nonatomic) NSString *path;
@property (nonatomic) _Bool isDirectory;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSDictionary *extendedAttributes;

+ (_Bool)supportsSecureCoding;
+ (id)fileInfoWithPath:(id)arg1 extendedAttributes:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 extendedAttributes:(id)arg2;

@end
