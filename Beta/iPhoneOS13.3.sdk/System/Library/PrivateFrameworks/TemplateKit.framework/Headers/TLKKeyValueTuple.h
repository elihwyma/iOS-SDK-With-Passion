/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class NSString;

@interface TLKKeyValueTuple

{
    NSString *_key;
    NSString *_value;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;

+ (id)tupleWithKey:(id)arg1 value:(id)arg2;
+ (id)tuplesForDictionary:(id)arg1;
+ (id)tuplesForKeys:(id)arg1 values:(id)arg2;

@end
