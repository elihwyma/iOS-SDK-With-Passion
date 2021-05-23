/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SKAttribute : NSObject

{
    long long _type;
    NSString *_name;
    basic_string_90719d97 _nameString;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)attributeWithName:(id)arg1 type:(long long)arg2;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initWithName:(id)arg1 type:(long long)arg2;
- (const basic_string_90719d97 *)getNameString;
- (_Bool)isEqualToAttribute:(id)arg1;

@end
