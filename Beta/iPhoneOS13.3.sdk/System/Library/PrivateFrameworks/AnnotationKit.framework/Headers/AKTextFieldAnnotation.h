/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKTextBoxAnnotation.h>

@class NSString;

@interface AKTextFieldAnnotation : AKTextBoxAnnotation

{
    NSString *_fieldName;
}

@property (copy) NSString *fieldName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
