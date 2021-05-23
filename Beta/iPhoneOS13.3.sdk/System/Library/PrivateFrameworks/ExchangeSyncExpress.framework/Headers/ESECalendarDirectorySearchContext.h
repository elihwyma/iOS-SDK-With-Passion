/*
 Image: /System/Library/PrivateFrameworks/ExchangeSyncExpress.framework/ExchangeSyncExpress
 */

#import <Foundation/NSObject.h>

@interface ESECalendarDirectorySearchContext : NSObject

{
    CDUnknownBlockType _resultsBlock;
    CDUnknownBlockType _completionBlock;
}

- (void)finishedWithError:(id)arg1 exceededResultLimit:(_Bool)arg2;
- (id)initWithResultsBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resultsReturned:(id)arg1;

@end
