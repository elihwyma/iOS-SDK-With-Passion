/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _TIPreference : NSObject

{
    NSString *_key;
    NSString *_domain;
    id _defaultValue;
    id _currentValue;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) id currentValue;

+ (id)preferenceWithKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3;

@end
