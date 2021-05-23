/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WKInterfaceObject : NSObject

{
    NSString *_interfaceProperty;
    NSString *_viewControllerID;
    NSString *_propertyIndex;
    long long _tableIndex;
    long long _rowIndex;
}

@property (copy, nonatomic) NSString *interfaceProperty;
@property (copy, nonatomic) NSString *viewControllerID;
@property (retain, nonatomic) NSString *propertyIndex;
@property (nonatomic) long long tableIndex;
@property (nonatomic) long long rowIndex;

- (id)init;
- (void)setWidth:(double)arg1;
- (void)setHeight:(double)arg1;
- (void)setRotation:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)_sendValueChanged:(id)arg1 forProperty:(id)arg2;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (void)didRegisterWithRemoteInterface;
- (void)_setImage:(id)arg1 forProperty:(id)arg2;
- (void)_setImageData:(id)arg1 forProperty:(id)arg2;
- (void)_setImageNamed:(id)arg1 forProperty:(id)arg2;
- (void)_sendValueChanged:(id)arg1;
- (void)setRelativeWidth:(double)arg1 withAdjustment:(double)arg2;
- (void)setRelativeHeight:(double)arg1 withAdjustment:(double)arg2;
- (void)sizeToFitWidth;
- (void)sizeToFitHeight;
- (void)setAccessibilityImageRegions:(id)arg1;

@end
