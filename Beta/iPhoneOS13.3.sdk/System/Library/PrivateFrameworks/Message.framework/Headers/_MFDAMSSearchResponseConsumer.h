/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/_MFDAMSBasicConsumer.h>

@class MFConditionLock, MFMailMessageStoreSearchResult, NSDate;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer

{
    NSDate *latestDateToAdd;
    NSDate *earliestDateAdded;
    MFConditionLock *doneCondition;
    double timeReceivedLastResponse;
    unsigned int totalCount;
    MFMailMessageStoreSearchResult *searchResult;
}

@property (retain, nonatomic) NSDate *latestDateToAdd;
@property (nonatomic, readonly) NSDate *earliestDateAdded;
@property (nonatomic, readonly) MFMailMessageStoreSearchResult *searchResult;

- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (_Bool)handleItems:(id)arg1;
- (void)waitUntilDone;
- (_Bool)waitUntilDoneBeforeDate:(id)arg1;
- (void)resetDoneCondition;

@end
