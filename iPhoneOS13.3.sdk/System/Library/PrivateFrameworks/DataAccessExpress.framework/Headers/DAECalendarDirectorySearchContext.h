//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DAECalendarDirectorySearchContext : NSObject
{
    id /* CDUnknownBlockType */ _resultsBlock;
    id /* CDUnknownBlockType */ _completionBlock;
}

// - (void).cxx_destruct;
- (void)finishedWithError:(id)arg1 exceededResultLimit:(BOOL)arg2;
- (void)resultsReturned:(id)arg1;
- (id)initWithResultsBlock:(id /* CDUnknownBlockType */)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;

@end

