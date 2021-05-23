/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@protocol IKEntityValueProviding;

__attribute__((visibility("hidden")))
@interface _SKUIDynamicGridEntityValueProviderValue : NSObject

{
    id <IKEntityValueProviding> _entityValueProvider;
    long long _sectionIndex;
}

@property (retain, nonatomic) id <IKEntityValueProviding> entityValueProvider;
@property (nonatomic) long long sectionIndex;

@end
