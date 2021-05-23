/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIMediaQueryFeature : NSObject

{
    NSString *_featureName;
}

@property (nonatomic, readonly) NSString *featureName;
@property (nonatomic, readonly) NSArray *notificationNames;
@property (nonatomic, readonly) NSArray *requiredKeys;

+ (_Bool)supportsFeatureName:(id)arg1;

- (id)initWithFeatureName:(id)arg1 value:(id)arg2;
- (_Bool)evaluateWithValues:(id)arg1;

@end
