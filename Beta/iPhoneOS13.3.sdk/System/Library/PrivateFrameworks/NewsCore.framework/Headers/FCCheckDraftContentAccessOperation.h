/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary, NSSet;

@protocol FCContentContext;

@interface FCCheckDraftContentAccessOperation : FCOperation

{
    id <FCContentContext> _context;
    NSArray *_channelMemberships;
    NSSet *_issueIDs;
    NSSet *_articleIDs;
    CDUnknownBlockType _checkAccessCompletion;
    NSDictionary *_resultAccessByContentID;
}

@property (copy, nonatomic) NSDictionary *resultAccessByContentID;
@property (retain, nonatomic) id <FCContentContext> context;
@property (copy, nonatomic) NSArray *channelMemberships;
@property (copy, nonatomic) NSSet *issueIDs;
@property (copy, nonatomic) NSSet *articleIDs;
@property (copy, nonatomic) CDUnknownBlockType checkAccessCompletion;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end
