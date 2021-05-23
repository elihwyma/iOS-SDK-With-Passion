/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface _UICommandIdentifier : NSObject <Swift>

{
    SEL _action;
    id _propertyList;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) id propertyList;

+ (_Bool)supportsSecureCoding;
+ (id)identifierWithAction:(SEL)arg1 propertyList:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(SEL)arg1 propertyList:(id)arg2;

@end
