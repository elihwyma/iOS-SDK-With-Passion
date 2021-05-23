/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class CLLocation, NSMutableDictionary, NSNumber, NSString;

@interface SSLookupProperties : NSObject

{
    CLLocation *_location;
    long long _localizationStyle;
    NSMutableDictionary *_requestParameters;
    NSNumber *_timeoutInterval;
}

@property (copy, nonatomic) NSString *keyProfile;
@property (nonatomic) long long localizationStyle;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSNumber *timeoutInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)valueForRequestParameter:(id)arg1;
- (id)copyRequestParameters;

@end
