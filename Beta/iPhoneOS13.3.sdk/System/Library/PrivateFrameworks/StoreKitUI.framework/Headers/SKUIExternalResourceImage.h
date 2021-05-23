/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface SKUIExternalResourceImage : NSObject

{
    _Bool _alwaysTemplate;
    NSString *_imageName;
    NSBundle *_bundle;
}

@property (copy, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSBundle *bundle;
@property (nonatomic) _Bool alwaysTemplate;

@end
