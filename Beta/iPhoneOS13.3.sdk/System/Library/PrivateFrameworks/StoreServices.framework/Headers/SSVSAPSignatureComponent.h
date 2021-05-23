/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSVSAPSignatureComponent : NSObject

{
    long long _componentType;
    NSString *_key;
}

@property (nonatomic, readonly) long long componentType;
@property (copy, nonatomic, readonly) NSString *key;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComponentType:(long long)arg1 key:(id)arg2;
- (id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2;
- (id)dataToSignWithURLRequest:(id)arg1;
- (id)_dataToSignWithDataSource:(id)arg1;
- (id)dataToSignWithRequestProperties:(id)arg1;

@end
