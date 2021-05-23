/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSString;

@protocol UIFocusItem;

__attribute__((visibility("hidden")))
@interface UIFocusRingClientState : NSObject

{
    id <UIFocusItem> _currentFocusItem;
    NSMutableArray *_activeFocusLayers;
    NSMapTable *_activeFocusLayersToItems;
    NSString *_clientID;
}

@property (weak, nonatomic) id <UIFocusItem> currentFocusItem;
@property (retain, nonatomic) NSMutableArray *activeFocusLayers;
@property (retain, nonatomic) NSMapTable *activeFocusLayersToItems;
@property (retain, nonatomic) NSString *clientID;

- (id)initWithClientID:(id)arg1;

@end
