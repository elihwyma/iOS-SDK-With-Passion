/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class MISSING_TYPE, NSArray;

@interface ARPresentationDescriptor : NSObject <Swift>

{
    unsigned long long _colorPixelFormat;
    unsigned long long _depthPixelFormat;
    MISSING_TYPE *_depthRange;
    long long _layout;
    long long _multisampleCount;
    long long _HUDOption;
    long long _presentationWarp;
    unsigned long long _drawablePixelFormat;
    unsigned long long _drawableCount;
    NSArray *_supportedMultisampleCount;
}

@property (nonatomic) long long HUDOption;
@property (nonatomic) long long presentationWarp;
@property (nonatomic, readonly) MISSING_TYPE *viewportDepthRange;
@property (nonatomic, readonly) MISSING_TYPE *viewportDepthRangeNDC;
@property (nonatomic) unsigned long long drawablePixelFormat;
@property (nonatomic) unsigned long long drawableCount;
@property (nonatomic, readonly) NSArray *supportedMultisampleCount;
@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) unsigned long long depthPixelFormat;
@property (nonatomic) MISSING_TYPE *depthRange;
@property (nonatomic) long long layout;
@property (nonatomic) long long multisampleCount;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isReverseZ;
- (_Bool)isEqualToDescriptor:(id)arg1;

@end
