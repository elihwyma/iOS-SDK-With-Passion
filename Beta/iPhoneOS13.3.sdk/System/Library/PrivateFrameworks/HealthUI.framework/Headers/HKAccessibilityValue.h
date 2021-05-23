/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface HKAccessibilityValue : NSObject

{
    NSString *_valueTitle;
    NSString *_valueType;
    NSString *_valueDescription;
    NSNumber *_valueAsNumber;
}

@property (nonatomic, readonly) NSString *valueTitle;
@property (nonatomic, readonly) NSString *valueType;
@property (nonatomic, readonly) NSString *valueDescription;
@property (nonatomic, readonly) NSNumber *valueAsNumber;

- (id)description;
- (id)initWithValueTitle:(id)arg1 valueType:(id)arg2 valueDescription:(id)arg3 valueAsNumber:(id)arg4;

@end
