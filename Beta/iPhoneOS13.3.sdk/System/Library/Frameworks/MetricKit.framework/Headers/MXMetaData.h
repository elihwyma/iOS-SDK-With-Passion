/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MXMetaData : NSObject

{
    NSString *_regionFormat;
    NSString *_osVersion;
    NSString *_deviceType;
    NSString *_applicationBuildVersion;
}

@property (readonly) NSString *regionFormat;
@property (readonly) NSString *osVersion;
@property (readonly) NSString *deviceType;
@property (readonly) NSString *applicationBuildVersion;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)JSONRepresentation;
- (id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4;
- (id)DictionaryRepresentation;

@end
