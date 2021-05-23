/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNUICoreContactEditingSession, NSString;

__attribute__((visibility("hidden")))
@interface CNUIEditingSessionSaveExecutor : NSObject

{
    CNUICoreContactEditingSession *_editingSession;
}

@property (nonatomic, readonly) CNUICoreContactEditingSession *editingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)executeSaveWithConfiguration:(id)arg1;
- (id)initWithEditingSession:(id)arg1;

@end
