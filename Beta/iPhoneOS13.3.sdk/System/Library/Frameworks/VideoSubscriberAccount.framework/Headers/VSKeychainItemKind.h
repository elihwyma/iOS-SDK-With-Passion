/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VSKeychainItemKind : NSObject

{
    NSString *_itemClassName;
    const struct __CFString *_secItemClass;
    NSArray *_properties;
}

@property (copy, nonatomic) NSString *itemClassName;
@property (nonatomic) const struct __CFString *secItemClass;
@property (copy, nonatomic, readonly) NSDictionary *attributesByName;
@property (copy, nonatomic) NSArray *properties;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
