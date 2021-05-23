/*
 Image: /System/Library/PrivateFrameworks/MobileKeyBag.framework/MobileKeyBag
 */

#import <NSMachPort.h>

__attribute__((visibility("hidden")))
@interface UMPersonaMachPort : NSMachPort

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)replacementObjectForCoder:(id)arg1;

@end
