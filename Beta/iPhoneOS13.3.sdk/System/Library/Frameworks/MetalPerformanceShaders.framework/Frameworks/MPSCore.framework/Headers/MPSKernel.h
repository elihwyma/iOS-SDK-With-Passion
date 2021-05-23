/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

#import <MPSCore/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@interface MPSKernel : NSObject <Swift>

{
    unsigned long long _options;
    struct MPSDevice *_device;
    struct MPSLibrary *_library;
    NSString *_label;
    _Bool _enableConcurrency;
    unsigned long long _allowedOptions;
    unsigned int _tuningParams;
    unsigned int _maxTuningParams;
    CDUnion_cbb8185c _fileVersion;
    unsigned int _privateOptions;
}

@property (nonatomic) _Bool enableConcurrency;
@property (nonatomic) CDUnion_cbb8185c fileVersion;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic, readonly) id <MTLDevice> device;
@property (copy) NSString *label;

+ (_Bool)supportsSecureCoding;
+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugQuickLookObject;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)sharedInitWithDevice:(id)arg1;
- (_Bool)disableConcurrentEncoder;

@end
