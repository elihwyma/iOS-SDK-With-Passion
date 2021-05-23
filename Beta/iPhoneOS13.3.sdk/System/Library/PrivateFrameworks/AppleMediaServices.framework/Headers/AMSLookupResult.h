/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSURLResult.h>

@class NSArray, NSDate, NSDictionary;

@interface AMSLookupResult : AMSURLResult

{
    NSDictionary *_response;
    NSDate *_expirationDate;
}

@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic, readonly) NSArray *allItems;

- (id)itemForKey:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)_enumerateItemsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithResult:(id)arg1 dictionary:(id)arg2;
- (id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2;

@end
