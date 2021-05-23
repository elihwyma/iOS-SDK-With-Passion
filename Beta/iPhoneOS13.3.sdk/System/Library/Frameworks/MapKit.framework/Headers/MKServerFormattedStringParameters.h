/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MKServerFormattedStringParameters : NSObject

{
    NSDictionary *_variableOverides;
    CDStruct_57af2063 _options;
}

@property (nonatomic, readonly) CDStruct_57af2063 options;
@property (copy, nonatomic, readonly) NSDictionary *variableOverides;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(CDStruct_57af2063)arg1 variableOverrides:(id)arg2;
- (_Bool)isEqualToServerFormattedStringParameters:(id)arg1;
- (id)initWithInstructionsDistanceDetailLevel:(long long)arg1 variableOverrides:(id)arg2;

@end
