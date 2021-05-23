/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _HKXMLExtractorElement : NSObject

{
    NSString *_specificationElement;
    NSDictionary *_specificationAttributes;
}

@property (readonly) NSString *specificationElement;
@property (readonly) NSDictionary *specificationAttributes;

- (id)initWithElementName:(id)arg1 attributes:(id)arg2;
- (id)initWithTagSpecification:(id)arg1;
- (_Bool)matchesElement:(id)arg1;

@end
