/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NSObject;

__attribute__((visibility("hidden")))
@interface AMSBagKeyInfo : NSObject

{
    NSString *_bagKey;
    id <NSObject> _defaultValue;
    unsigned long long _valueType;
}

@property (nonatomic, readonly) NSString *bagKey;
@property (nonatomic, readonly) id <NSObject> defaultValue;
@property (nonatomic, readonly) unsigned long long valueType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2;

@end
