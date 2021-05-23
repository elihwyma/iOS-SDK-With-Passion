/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface VSSubscriptionFetchOptionDescription : NSObject

{
    _Bool _container;
    NSString *_key;
    id _defaultValue;
    unsigned long long _minCount;
    Class _allowedClass;
    NSPredicate *_allowedValuePredicate;
}

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic, getter=isContainer) _Bool container;
@property (nonatomic) unsigned long long minCount;
@property (retain, nonatomic) Class allowedClass;
@property (copy, nonatomic) NSPredicate *allowedValuePredicate;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
