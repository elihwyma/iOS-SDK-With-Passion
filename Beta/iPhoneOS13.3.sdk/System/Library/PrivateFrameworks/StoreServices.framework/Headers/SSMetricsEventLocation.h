/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SSMetricsEventLocation : NSObject

{
    long long _position;
    NSString *_type;
    NSMutableDictionary *_values;
}

@property (nonatomic) long long locationPosition;
@property (copy, nonatomic) NSString *locationType;
@property (nonatomic, readonly) NSDictionary *reportingDictionary;

- (void)setValue:(id)arg1 forLocationKey:(id)arg2;
- (id)valueForLocationKey:(id)arg1;

@end
