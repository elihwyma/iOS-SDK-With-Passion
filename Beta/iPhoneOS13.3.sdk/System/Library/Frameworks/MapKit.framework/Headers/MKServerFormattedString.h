/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKServerFormattedStringParameters;

@protocol GEOServerFormattedString;

@interface MKServerFormattedString : NSObject

{
    id <GEOServerFormattedString> _geoServerString;
    MKServerFormattedStringParameters *_parameters;
}

@property (nonatomic, readonly) id <GEOServerFormattedString> geoServerString;
@property (copy, nonatomic, readonly) MKServerFormattedStringParameters *parameters;

+ (_Bool)supportsSecureCoding;
+ (id)attributesForServerFormatStyle:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToServerFormattedString:(id)arg1;
- (id)multiPartAttributedStringWithAttributes:(id)arg1;
- (id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)arg1 geoServerString:(id)arg2;
- (id)_attributesByTokenForFormatStyles:(id)arg1;
- (id)initWithGeoServerString:(id)arg1 parameters:(id)arg2;

@end
