/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSOperation.h>

@class EKDirectorySearchQuery, NSError, NSString;

@interface EKDirectorySearchOperation : NSOperation

{
    _Bool _isFinished;
    _Bool _isExecuting;
    NSString *_accountID;
    EKDirectorySearchQuery *_query;
    CDUnknownBlockType _resultsBlock;
    id _searchID;
    _Bool _numberOfMatchesExceededLimit;
    NSError *_error;
}

@property (nonatomic) _Bool numberOfMatchesExceededLimit;
@property (retain, nonatomic) NSError *error;

+ (_Bool)isSupported;

- (id)init;
- (void)cancel;
- (void)start;
- (void)main;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)_finishWithError:(id)arg1;
- (id)initWithSource:(id)arg1 query:(id)arg2 resultsBlock:(CDUnknownBlockType)arg3;
- (id)_recordTypes;
- (void)_processResults:(id)arg1;
- (id)_processGroupsInResults:(id)arg1;
- (id)_processLocationsInResults:(id)arg1;
- (id)_processResourcesInResults:(id)arg1;
- (id)_processPeopleInResults:(id)arg1;

@end
