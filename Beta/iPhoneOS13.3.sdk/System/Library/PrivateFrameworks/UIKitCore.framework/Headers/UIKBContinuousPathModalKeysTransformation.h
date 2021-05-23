/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBContinuousPathModalKeysTransformation : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationIdentifier;
+ (id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)rollbackKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)_donorKeyplaneForKeyplane:(id)arg1 transformationContext:(id)arg2;
+ (id)_donorControlKeysForLastDisplayRowForKeyplane:(id)arg1 transformationContext:(id)arg2;

@end
