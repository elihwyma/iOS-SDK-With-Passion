/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <ITMLKit/IKJSObject.h>

@protocol VSJSItemGroupBridge;

__attribute__((visibility("hidden")))
@interface VSJSItemGroup : IKJSObject

{
    long long _selectedItem;
    id <VSJSItemGroupBridge> _bridge;
}

@property (retain, nonatomic) id <VSJSItemGroupBridge> bridge;
@property (nonatomic) long long selectedItem;

@end
