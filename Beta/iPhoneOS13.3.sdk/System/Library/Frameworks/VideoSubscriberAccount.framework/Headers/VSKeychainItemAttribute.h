/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSKeychainItemAttribute : NSObject

{
    NSString *_name;
    unsigned long long _attributeType;
    NSString *_attributeValueClassName;
    const struct __CFString *_secItemAttributeKey;
    id _defaultValue;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long attributeType;
@property (copy, nonatomic) NSString *attributeValueClassName;
@property (nonatomic) const struct __CFString *secItemAttributeKey;
@property (retain, nonatomic) id defaultValue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
