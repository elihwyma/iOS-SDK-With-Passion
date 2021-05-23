/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class NSMutableArray;

@interface AXHASettingsListenerHelper : NSObject

{
    id _listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void)dealloc;
- (id)initWithListenerAddress:(id)arg1;
- (void)addSelectorKey:(SEL)arg1;

@end
