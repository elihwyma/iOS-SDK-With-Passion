/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFType.h>

@class NSBundle, NSString;

@interface WFObjectType : WFType

{
    Class _objectClass;
    NSBundle *_bundle;
    NSString *_className;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) Class objectClass;
@property (copy, nonatomic, readonly) NSString *string;

+ (_Bool)supportsSecureCoding;
+ (id)typeWithClassName:(id)arg1 frameworkName:(id)arg2 location:(unsigned long long)arg3;
+ (id)typeWithClass:(Class)arg1;
+ (id)typesWithClasses:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)conformsToType:(id)arg1;
- (id)initWithObjectClass:(Class)arg1;
- (_Bool)isEqualToType:(id)arg1;
- (_Bool)conformsToClass:(Class)arg1;
- (_Bool)isEqualToClass:(Class)arg1;
- (id)initWithClassName:(id)arg1 inBundle:(id)arg2;

@end
