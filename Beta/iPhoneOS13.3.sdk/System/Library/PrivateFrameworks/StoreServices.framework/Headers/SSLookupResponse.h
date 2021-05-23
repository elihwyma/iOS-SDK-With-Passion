/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSString, SSMetricsConfiguration, SSMetricsPageEvent;

@interface SSLookupResponse : NSObject

{
    NSDate *_expirationDate;
    NSMutableArray *_itemOrder;
    SSMetricsPageEvent *_metricsPageEvent;
    NSDictionary *_response;
}

@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic, setter=_setMetricsPageEvent:) SSMetricsPageEvent *metricsPageEvent;
@property (nonatomic, readonly) NSArray *allItems;
@property (nonatomic, readonly) SSMetricsConfiguration *metricsConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)itemForKey:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (void)_enumerateItemsWithBlock:(CDUnknownBlockType)arg1;
- (id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithLocationResponseDictionary:(id)arg1;

@end
