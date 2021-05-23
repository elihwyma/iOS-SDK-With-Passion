/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CTVoiceLinkQualityMetric : NSObject

{
    NSNumber *_linkQuality;
}

@property (retain, nonatomic) NSNumber *linkQuality;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkQuality:(id)arg1;

@end
