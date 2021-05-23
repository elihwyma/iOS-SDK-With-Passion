/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _HKXMLExtractorSpecification : NSObject

{
    NSString *_specificationString;
    NSArray *_specificationElements;
}

@property (readonly) NSString *specificationString;
@property (readonly) NSArray *specificationElements;

- (id)initWithSpecificationString:(id)arg1;
- (_Bool)matchesElementStack:(id)arg1;

@end
