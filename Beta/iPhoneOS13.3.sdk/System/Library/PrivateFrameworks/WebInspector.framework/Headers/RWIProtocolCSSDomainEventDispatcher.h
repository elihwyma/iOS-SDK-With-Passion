/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@interface RWIProtocolCSSDomainEventDispatcher : NSObject

{
    struct AugmentableInspectorController *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController *)arg1;
- (void)mediaQueryResultChanged;
- (void)styleSheetChangedWithStyleSheetId:(id)arg1;
- (void)styleSheetAddedWithHeader:(id)arg1;
- (void)styleSheetRemovedWithStyleSheetId:(id)arg1;

@end
