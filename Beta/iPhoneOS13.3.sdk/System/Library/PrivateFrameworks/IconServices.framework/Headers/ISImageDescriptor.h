/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

#import <IconServices/Swift-Protocol.h>

@class NSString;

@protocol NSCopying;

@interface ISImageDescriptor : NSObject <Swift>

{
    struct CGSize _size;
    double _scale;
    unsigned long long _variantOptions;
    unsigned long long _badgeOptions;
    unsigned long long _backgroundStyle;
    _Bool _preferExtendedColorResources;
    NSString *_preferedResourceName;
    unsigned long long _languageDirection;
}

@property (readonly) struct CGSize sanitizedSize;
@property (readonly) double sanitizedScale;
@property (retain) NSString *preferedResourceName;
@property _Bool preferExtendedColorResources;
@property unsigned long long languageDirection;
@property (retain) id <NSCopying> imageCacheKey;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long variantOptions;
@property (nonatomic) unsigned long long badgeOptions;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) unsigned long long shape;
@property (nonatomic, readonly) double continuousCornerRadius;
@property (nonatomic) _Bool shouldApplyMask;
@property (nonatomic) _Bool drawBorder;
@property (nonatomic) _Bool drawBadge;
@property (nonatomic) _Bool templateVariant;
@property (nonatomic) _Bool selectedVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)imageDescriptorNamed:(id)arg1;
+ (id)icnsImageDescriptors;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2;

@end
