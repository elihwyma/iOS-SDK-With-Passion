/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

__attribute__((visibility("hidden")))
@interface SKUIJSColor : IKJSObject

{
    unsigned long long _red;
    unsigned long long _green;
    unsigned long long _blue;
    double _alpha;
}

@property (nonatomic, readonly) unsigned long long red;
@property (nonatomic, readonly) unsigned long long green;
@property (nonatomic, readonly) unsigned long long blue;
@property (nonatomic, readonly) double alpha;

- (id)description;
- (id)initWithAppContext:(id)arg1 color:(id)arg2;

@end
