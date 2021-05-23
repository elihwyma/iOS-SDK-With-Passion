/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface MKWalletMerchantStylingInfo : NSObject

{
    NSData *_styleAttributesData;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyleAttributes:(id)arg1;
- (id)imageForSize:(unsigned long long)arg1 scale:(double)arg2;
- (id)_featureStyleAttributes;
- (id)imageForSize:(unsigned long long)arg1 scale:(double)arg2 transparent:(_Bool)arg3;
- (id)tintColorForScale:(double)arg1;

@end
