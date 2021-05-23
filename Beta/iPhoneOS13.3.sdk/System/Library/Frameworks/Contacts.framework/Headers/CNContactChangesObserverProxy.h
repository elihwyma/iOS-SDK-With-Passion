/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContact, NSArray;

@protocol CNContactChangesObserver;

__attribute__((visibility("hidden")))
@interface CNContactChangesObserverProxy : NSObject

{
    _Bool _unify;
    id <CNContactChangesObserver> _observer;
    NSArray *_keysToFetch;
    CNContact *_contactSnapshot;
}

@property (weak, nonatomic) id <CNContactChangesObserver> observer;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (nonatomic) _Bool unify;
@property (retain, nonatomic) CNContact *contactSnapshot;

@end
