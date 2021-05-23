/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CRRecentContactsLibrary, NSString;

@protocol CNUIDefaultUserActionRecorderEventFactory;

@interface CNUIDefaultUserActionRecorder : NSObject

{
    CRRecentContactsLibrary *_library;
    id <CNUIDefaultUserActionRecorderEventFactory> _eventFactory;
}

@property (nonatomic, readonly) CRRecentContactsLibrary *library;
@property (nonatomic, readonly) id <CNUIDefaultUserActionRecorderEventFactory> eventFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)recordUserAction:(id)arg1;
- (id)initWithRecentsLibrary:(id)arg1 eventFactory:(id)arg2;

@end
