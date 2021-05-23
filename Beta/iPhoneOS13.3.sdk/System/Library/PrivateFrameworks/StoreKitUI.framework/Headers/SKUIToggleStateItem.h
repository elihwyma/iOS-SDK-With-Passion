/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString;

@interface SKUIToggleStateItem : NSObject <Swift>

{
    BOOL _toggled;
    long long _count;
    NSString *_itemIdentifier;
    NSString *_nonToggledString;
    NSString *_toggledString;
}

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (nonatomic) BOOL toggled;
@property (copy, nonatomic) NSString *nonToggleString;
@property (copy, nonatomic) NSString *toggledString;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
