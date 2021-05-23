/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactFetchRequest, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNContactFetchExecutor : NSObject

{
    CNContactFetchRequest *_request;
    CNContactStore *_store;
}

@property (copy, nonatomic, readonly) CNContactFetchRequest *request;
@property (nonatomic, readonly) CNContactStore *store;

+ (id)os_log;

- (id)description;
- (id)initWithRequest:(id)arg1 store:(id)arg2;
- (id)run:(id *)arg1;

@end
