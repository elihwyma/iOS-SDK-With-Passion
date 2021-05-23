/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CRRecentContactsLibrary;

__attribute__((visibility("hidden")))
@interface CNReputationCoreRecentsAdapter : NSObject

{
    CRRecentContactsLibrary *_library;
}

@property (nonatomic, readonly) CRRecentContactsLibrary *library;

- (id)init;
- (id)recentContactsForHandle:(id)arg1;
- (id)initWithRecentContactsLibrary:(id)arg1;

@end
