/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNImageRegistrationSignature : NSObject

{
    struct FastRegistration_Signatures mSignature_;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (const struct FastRegistration_Signatures *)signature;
- (id)initWithImageBuffer:(id)arg1 andOptions:(id)arg2 error:(id *)arg3;

@end
