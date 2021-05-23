/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNChangeHistoryFetchRequest, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryFetchExecutor : NSObject

{
    CNChangeHistoryFetchRequest *_request;
    CNContactStore *_store;
}

@property (copy, nonatomic, readonly) CNChangeHistoryFetchRequest *request;
@property (nonatomic, readonly) CNContactStore *store;

+ (id)os_log;
+ (id)contactEventForChange:(id)arg1 factory:(id)arg2;

- (id)description;
- (id)keysToFetch;
- (id)initWithRequest:(id)arg1 store:(id)arg2;
- (id)run:(id *)arg1;
- (id)deltaSync;
- (id)fullSync;
- (id)contactEventsFromLegacyResult:(id)arg1 eventFactory:(id)arg2;
- (id)groupEventsFromLegacyResult:(id)arg1 eventFactory:(id)arg2;

@end
