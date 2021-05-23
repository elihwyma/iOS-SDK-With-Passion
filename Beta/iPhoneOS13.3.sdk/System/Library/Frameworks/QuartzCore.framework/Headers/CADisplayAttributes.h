/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@interface CADisplayAttributes : NSObject

{
    struct EDIDAttributes _edid_attributes;
}

@property (readonly) long long dolbyVision;
@property (readonly) long long pqEOTF;
@property (readonly) long long hdrStaticMetadataType1;
@property (readonly) long long bt2020YCC;
@property (readonly) _Bool legacyHDMIEDID;

- (id).cxx_construct;
- (id)_initWithAttributes:(struct EDIDAttributes)arg1;

@end
