/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSData, NSNumber, NSString;

@protocol NSObject;

@interface HMFPreference

{
    NSString *_key;
    unsigned long long _options;
    id <NSObject> _value;
    HMFPreference *_parent;
}

@property (readonly) NSString *key;
@property (readonly) unsigned long long options;
@property (copy) id <NSObject> value;
@property (weak, readonly) HMFPreference *parent;
@property (nonatomic, readonly) _Bool boolValue;
@property (copy, nonatomic, readonly) NSNumber *numberValue;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (copy, nonatomic, readonly) NSData *dataValue;

+ (id)shortDescription;

- (id)init;
- (id)shortDescription;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 parent:(id)arg4;

@end
