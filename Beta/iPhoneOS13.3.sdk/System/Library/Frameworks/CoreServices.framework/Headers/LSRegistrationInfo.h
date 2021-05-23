/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface LSRegistrationInfo : NSObject

{
    unsigned int version;
    unsigned int action;
    unsigned int options;
    unsigned int itemFlags;
    unsigned int containerUnit;
    unsigned int bundleUnit;
    unsigned int bundleClass;
    unsigned long long inoBundle;
    unsigned long long inoExec;
    double contentModDate;
}

+ (_Bool)supportsSecureCoding;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
