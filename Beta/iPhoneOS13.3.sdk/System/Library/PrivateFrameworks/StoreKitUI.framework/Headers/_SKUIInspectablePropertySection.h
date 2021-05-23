/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _SKUIInspectablePropertySection : NSObject

{
    NSString *_friendlyName;
    NSMutableArray *_properties;
}

@property (copy, nonatomic) NSString *friendlyName;
@property (nonatomic, readonly) NSMutableArray *properties;

- (id)init;

@end
