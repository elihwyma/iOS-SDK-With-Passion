/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@interface MBSizeInfo : NSObject

{
    unsigned long long _size;
    unsigned long long _state;
}

@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long state;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
