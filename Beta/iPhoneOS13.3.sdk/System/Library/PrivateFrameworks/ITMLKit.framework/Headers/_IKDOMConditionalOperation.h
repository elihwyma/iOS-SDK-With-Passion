/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKDataBindingPropertyPath, NSString;

__attribute__((visibility("hidden")))
@interface _IKDOMConditionalOperation : NSObject

{
    unsigned long long _type;
    IKDataBindingPropertyPath *_propertyPath;
    NSString *_literal;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) IKDataBindingPropertyPath *propertyPath;
@property (copy, nonatomic) NSString *literal;

- (_Bool)passesForDataItem:(id)arg1;

@end
