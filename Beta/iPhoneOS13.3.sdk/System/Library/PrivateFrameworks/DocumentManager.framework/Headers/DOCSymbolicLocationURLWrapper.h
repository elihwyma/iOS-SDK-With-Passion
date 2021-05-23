/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <FileProvider/FPSandboxingURLWrapper.h>

@interface DOCSymbolicLocationURLWrapper : FPSandboxingURLWrapper

{
    unsigned long long _symbolicLocation;
}

@property (nonatomic) unsigned long long symbolicLocation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
