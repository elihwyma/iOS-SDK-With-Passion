/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, _SFKeySpecifier;

@interface _SFKey : NSObject

{
    id _keyInternal;
    NSData *_keyData;
}

@property (nonatomic, readonly) NSData *keyData;
@property (copy, nonatomic, readonly) _SFKeySpecifier *keySpecifier;
@property (copy, nonatomic, readonly) NSString *keyDomain;

+ (Class)_attributesClass;
+ (id)_specifierForSecKey:(struct __SecKey *)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id *)arg3;
- (id)initRandomKeyWithSpecifier:(id)arg1;

@end
