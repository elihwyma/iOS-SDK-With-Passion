/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HUTriggerActionBuilderEditorDelegate;

@interface HUForwardingTriggerActionBuilderDelegate : NSObject

{
    id <HUTriggerActionBuilderEditorDelegate> _triggerActionBuilderEditorDelegate;
}

@property (weak, nonatomic) id <HUTriggerActionBuilderEditorDelegate> triggerActionBuilderEditorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (id)initWithTriggerActionBuilderEditorDelegate:(id)arg1;

@end
