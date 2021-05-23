/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@class CNContactFilter, CNContactFormatter, CNContactStore, NSArray, NSDictionary, NSString;

@protocol CNContactDataSourceDelegate;

@protocol CNContactDataSource <Swift>

@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) NSDictionary *contactMatchInfos;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSArray *indexSections;
@property (weak, nonatomic) id <CNContactDataSourceDelegate> delegate;
@property (nonatomic, readonly) _Bool canReload;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) CNContactStore *store;
@property (copy, nonatomic) CNContactFilter *filter;
@property (nonatomic, readonly) CNContactFilter *effectiveFilter;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) _Bool shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;

- (unsigned short)completeContactFromContact:fromMainStoreOnly:keysToFetch: /* Error: Ran out of types for this method. */;
- (unsigned short)indexPathForContact: /* Error: Ran out of types for this method. */;

@end
