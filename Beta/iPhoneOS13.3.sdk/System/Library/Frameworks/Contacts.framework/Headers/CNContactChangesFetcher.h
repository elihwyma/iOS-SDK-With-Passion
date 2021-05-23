/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface CNContactChangesFetcher : NSObject

{
    _Bool _unify;
    NSSet *_identifiers;
    NSSet *_keysToFetch;
}

@property (retain, nonatomic) NSSet *identifiers;
@property (retain, nonatomic) NSSet *keysToFetch;
@property (nonatomic) _Bool unify;

@end
