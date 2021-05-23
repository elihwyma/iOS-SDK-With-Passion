/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MCKeyValue : NSObject

{
    NSString *_key;
    id _value;
    unsigned long long _valueType;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) unsigned long long valueType;

- (id)initWithLocalizedString:(id)arg1 localizedKey:(id)arg2;
- (id)initWithData:(id)arg1 localizedKey:(id)arg2;
- (id)initWithDate:(id)arg1 localizedKey:(id)arg2;
- (id)initWithLocalizedArray:(id)arg1 localizedKey:(id)arg2;
- (void)setDate:(id)arg1 localizedKey:(id)arg2;
- (void)setLocalizedArray:(id)arg1 localizedKey:(id)arg2;
- (void)setLocalizedString:(id)arg1 localizedKey:(id)arg2;
- (id)initWithValue:(id)arg1 localizedKey:(id)arg2;
- (void)setData:(id)arg1 localizedKey:(id)arg2;
- (void)setValue:(id)arg1 localizedKey:(id)arg2;

@end
