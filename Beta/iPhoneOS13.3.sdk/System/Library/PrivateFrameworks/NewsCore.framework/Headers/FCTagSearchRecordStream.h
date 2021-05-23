/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKQueryCursor, NSMutableSet, NSString;

@interface FCTagSearchRecordStream : NSObject

{
    _Bool _fetching;
    _Bool _finished;
    CDUnknownBlockType _operationConstructor;
    CKQueryCursor *_cursor;
    NSMutableSet *_encounteredRecordIDs;
}

@property (copy, nonatomic) CDUnknownBlockType operationConstructor;
@property (retain, nonatomic) CKQueryCursor *cursor;
@property (nonatomic) _Bool fetching;
@property (nonatomic, getter=isFinished) _Bool finished;
@property (retain, nonatomic) NSMutableSet *encounteredRecordIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
