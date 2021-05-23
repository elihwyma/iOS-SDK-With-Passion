/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface CTEnhancedLinkQualityMetric : NSObject

{
    NSData *_enhancedLinkQuality;
}

@property (retain, nonatomic) NSData *enhancedLinkQuality;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnhancedLinkQuality:(id)arg1;

@end
