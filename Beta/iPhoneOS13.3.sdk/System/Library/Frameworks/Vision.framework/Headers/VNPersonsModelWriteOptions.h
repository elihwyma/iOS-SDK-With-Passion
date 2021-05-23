/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@interface VNPersonsModelWriteOptions : NSObject

{
    _Bool _readOnly;
    unsigned long long _version;
}

@property (nonatomic) unsigned long long version;
@property (nonatomic) _Bool readOnly;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
