/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKDataBindingValue, NSString;

__attribute__((visibility("hidden")))
@interface IKDataBindingEntry : NSObject

{
    NSString *_key;
    IKDataBindingValue *_value;
    unsigned long long _attributes;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) IKDataBindingValue *value;
@property (nonatomic, readonly) unsigned long long attributes;

- (id)initWithKey:(id)arg1 value:(id)arg2 attributes:(unsigned long long)arg3;

@end
