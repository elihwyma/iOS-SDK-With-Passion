/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface _HKXMLValidator : NSObject

{
    struct _xmlSchema *_xsdSchema;
}

+ (id)validatorWithXSD:(id)arg1;
+ (id)validatorWithPathToXSD:(id)arg1;

- (void)dealloc;
- (id)_initWithSchema:(struct _xmlSchema *)arg1;
- (_Bool)validateXML:(id)arg1 simpleError:(id *)arg2 detailedErrors:(id *)arg3;

@end
