/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _SKUIInspectableProperty : NSObject

{
    NSString *_friendlyName;
    id _value;
}

@property (copy, nonatomic) NSString *friendlyName;
@property (retain, nonatomic) id value;
@property (copy, nonatomic, readonly) NSString *valueString;

@end
