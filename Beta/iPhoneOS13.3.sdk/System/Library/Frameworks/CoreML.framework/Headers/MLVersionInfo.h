/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSString;

@interface MLVersionInfo : NSObject

{
    long long _majorVersion;
    long long _minorVersion;
    long long _patchVersion;
    NSString *_variantString;
}

@property (readonly) long long majorVersion;
@property (readonly) long long minorVersion;
@property (readonly) long long patchVersion;
@property (readonly) NSString *variantString;
@property (nonatomic, readonly) NSString *versionNumberString;
@property (nonatomic, readonly) NSString *versionString;

+ (id)versionInfoWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 variant:(id)arg4;
+ (id)versionInfoWithString:(id)arg1;

- (id)initWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 variant:(id)arg4;
- (_Bool)olderThan:(id)arg1;

@end
