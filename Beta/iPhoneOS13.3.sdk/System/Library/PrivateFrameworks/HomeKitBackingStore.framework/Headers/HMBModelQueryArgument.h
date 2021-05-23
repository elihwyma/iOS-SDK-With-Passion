/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class NSString;

@protocol HMBQueryableModelFieldCoder;

@interface HMBModelQueryArgument : HMFObject

{
    NSString *_propertyName;
    id <HMBQueryableModelFieldCoder> _defaultValue;
}

@property (nonatomic, readonly) NSString *propertyName;
@property (nonatomic, readonly) id <HMBQueryableModelFieldCoder> defaultValue;

+ (id)argumentWithPropertyName:(id)arg1;
+ (id)argumentWithPropertyName:(id)arg1 defaultValue:(id)arg2;

- (id)initWithPropertyName:(id)arg1 defaultValue:(id)arg2;

@end
