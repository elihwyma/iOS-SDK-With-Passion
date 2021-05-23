/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray;

@protocol NSObject;

__attribute__((visibility("hidden")))
@interface SSBagKey : NSObject

{
    id <NSObject> _defaultValue;
    NSArray *_stringRepresentation;
    unsigned long long _valueType;
}

@property (nonatomic, readonly) id <NSObject> defaultValue;
@property (nonatomic, readonly) NSArray *stringRepresentation;
@property (nonatomic, readonly) unsigned long long valueType;

- (id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2;
- (id)valueFromDictionary:(id)arg1;

@end
