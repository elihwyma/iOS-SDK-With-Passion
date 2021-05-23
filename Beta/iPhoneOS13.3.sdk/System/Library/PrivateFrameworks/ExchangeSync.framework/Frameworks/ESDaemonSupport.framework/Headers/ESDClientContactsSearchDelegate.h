/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <ESDaemonSupport/ESDClientDelegate.h>

@class DASearchQuery, NSData;

@interface ESDClientContactsSearchDelegate : ESDClientDelegate

{
    DASearchQuery *_query;
    NSData *_queryResultData;
}

@property (retain, nonatomic) DASearchQuery *query;
@property (retain, nonatomic) NSData *queryResultData;

- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)disable;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)beginQuery;
- (id)initWithAccountID:(id)arg1 queryDictionary:(id)arg2 client:(id)arg3;

@end
