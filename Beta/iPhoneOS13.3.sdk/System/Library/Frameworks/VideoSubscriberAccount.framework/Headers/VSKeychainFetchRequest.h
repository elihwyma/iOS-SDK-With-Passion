/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate, VSOptional;

__attribute__((visibility("hidden")))
@interface VSKeychainFetchRequest : NSObject

{
    _Bool _includesDataValues;
    VSOptional *_itemKind;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _fetchLimit;
}

@property (retain, nonatomic) VSOptional *itemKind;
@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic) _Bool includesDataValues;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
