/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIViewLFLDChangeRecord.h>

@class NSString, NSValue, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewLFLDGeometryChangeRecord : _UIViewLFLDChangeRecord

{
    NSString *_geometricPropertyName;
    NSValue *_geometricPropertyValue;
    UIView *_currentLayoutView;
    NSString *_currentLayoutMethodName;
}

@property (nonatomic, readonly) NSString *geometricPropertyName;
@property (nonatomic, readonly) NSValue *geometricPropertyValue;
@property (nonatomic, readonly) UIView *currentLayoutView;
@property (nonatomic, readonly) NSString *currentLayoutMethodName;

- (id)description;
- (id)initWithGeometricPropertyName:(id)arg1 value:(id)arg2 currentLayoutView:(id)arg3 methodName:(id)arg4;

@end
