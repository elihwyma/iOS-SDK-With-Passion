/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@interface UIAccessibilityElementDescription : NSObject

{
    _Bool _isAccessibleElement;
    unsigned long long _traits;
    NSString *_label;
    NSAttributedString *_attributedLabel;
    NSString *_value;
    NSAttributedString *_attributedValue;
    struct CGRect _frameInContainerSpace;
    struct CGRect _frame;
}

@property (nonatomic) _Bool isAccessibleElement;
@property (nonatomic) unsigned long long traits;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSAttributedString *attributedLabel;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSAttributedString *attributedValue;
@property (nonatomic) struct CGRect frameInContainerSpace;
@property (nonatomic) struct CGRect frame;

+ (_Bool)supportsSecureCoding;
+ (id)descriptionWithElement:(id)arg1 frameInContainerSpaceOrNil:(struct CGRect)arg2;
+ (id)_descriptionWithAXElement:(id)arg1;
+ (id)_descriptionWithLocalElement:(id)arg1;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)convertToAccessibilityElementWithContainer:(id)arg1;

@end
