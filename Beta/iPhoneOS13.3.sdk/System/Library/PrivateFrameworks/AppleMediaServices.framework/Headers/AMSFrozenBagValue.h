/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSBagValue.h>

@protocol AMSBagDataSourceProtocol;

__attribute__((visibility("hidden")))
@interface AMSFrozenBagValue : AMSBagValue

{
    id <AMSBagDataSourceProtocol> _dataSource;
}

@property (retain, nonatomic) id <AMSBagDataSourceProtocol> dataSource;

- (id)initWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;

@end
