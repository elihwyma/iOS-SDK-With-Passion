/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNCDPersistenceContext, NSPredicate;

__attribute__((visibility("hidden")))
@interface CNCDAccountFetcher : NSObject

{
    NSPredicate *_predicate;
    CNCDPersistenceContext *_persistenceContext;
}

@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) CNCDPersistenceContext *persistenceContext;

+ (id)accountsForPredicate:(id)arg1 inPersistenceStack:(id)arg2 error:(id *)arg3;

- (id)init;
- (id)initWithPredicate:(id)arg1 persistenceContext:(id)arg2;
- (id)fetchAccounts:(id *)arg1;

@end
