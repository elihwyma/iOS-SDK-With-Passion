/*
 Image: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
 */

#import <Foundation/NSObject.h>

@interface DAECalendarDirectorySearchContext : NSObject

{
    CDUnknownBlockType _resultsBlock;
    CDUnknownBlockType _completionBlock;
}

- (void)finishedWithError:(id)arg1 exceededResultLimit:(_Bool)arg2;
- (id)initWithResultsBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resultsReturned:(id)arg1;

@end
