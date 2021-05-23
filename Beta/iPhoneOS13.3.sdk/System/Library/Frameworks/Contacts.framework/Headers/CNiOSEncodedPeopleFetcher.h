/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactFetchRequest, CNContactsEnvironment, CNManagedConfiguration, NSString;

@protocol CNContactsLogger, CNEncodedFetchCursor;

@interface CNiOSEncodedPeopleFetcher : NSObject

{
    void *_addressBook;
    CNContactFetchRequest *_contactFetchRequest;
    CNContactsEnvironment *_environment;
    CDUnknownBlockType _completionHandler;
    id <CNEncodedFetchCursor> _cursor;
    id <CNContactsLogger> _logger;
    CNManagedConfiguration *_managedConfiguration;
}

@property (nonatomic, readonly) void *addressBook;
@property (nonatomic, readonly) CNContactFetchRequest *contactFetchRequest;
@property (nonatomic, readonly) CNContactsEnvironment *environment;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) id <CNEncodedFetchCursor> cursor;
@property (nonatomic, readonly) id <CNContactsLogger> logger;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)fetchNextBatchWithReply:(CDUnknownBlockType)arg1;
- (id)cursorWithError:(id *)arg1;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void *)arg2 managedConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 environment:(id)arg5;
- (_Bool)fetchEncodedPeopleWithError:(id *)arg1 cancelationToken:(id)arg2 batchHandler:(CDUnknownBlockType)arg3;

@end
