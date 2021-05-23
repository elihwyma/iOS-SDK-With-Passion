/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNRectangleObservation.h>

@class NSArray, NSString;

@interface VNTextObservation : VNRectangleObservation

{
    NSArray *_characterBoxes;
    NSString *_text;
}

@property (copy, nonatomic) NSArray *characterBoxes;
@property (copy, nonatomic, readonly) NSString *text;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setText:(id)arg1;

@end
