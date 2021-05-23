/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UITraitCollection;

__attribute__((visibility("hidden")))
@interface CNTestQuickActionViewContainer : NSObject

{
    NSDictionary *_actionViewsByActionType;
}

@property (nonatomic, readonly) NSDictionary *actionViewsByActionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (id)viewForActionType:(id)arg1;
- (id)initWithActionTypes:(id)arg1;

@end
