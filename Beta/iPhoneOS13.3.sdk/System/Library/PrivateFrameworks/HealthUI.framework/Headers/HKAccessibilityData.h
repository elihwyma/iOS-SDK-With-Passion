/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface HKAccessibilityData : NSObject

{
    NSArray *_accessibilityPointData;
    NSDictionary *_accessibilitySpans;
}

@property (nonatomic, readonly) NSArray *accessibilityPointData;
@property (nonatomic, readonly) NSDictionary *accessibilitySpans;

- (id)description;
- (id)initWithPointData:(id)arg1 accessibilitySpans:(id)arg2;

@end
