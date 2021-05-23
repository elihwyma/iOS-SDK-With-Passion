/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <Foundation/NSObject.h>

@class NSArray, UIAccessibilityElementDescription;

@interface UIAccessibilityHierarchyDescription : NSObject

{
    UIAccessibilityElementDescription *_rootElement;
    NSArray *_leafElements;
}

@property (retain, nonatomic) UIAccessibilityElementDescription *rootElement;
@property (retain, nonatomic) NSArray *leafElements;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
