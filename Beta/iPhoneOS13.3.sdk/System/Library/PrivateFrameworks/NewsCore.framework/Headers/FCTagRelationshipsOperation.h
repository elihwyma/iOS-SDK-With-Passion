/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCTagRelationships;

@protocol FCContentContext, FCTagProviding;

@interface FCTagRelationshipsOperation : FCOperation

{
    CDUnknownBlockType _completionHandler;
    id <FCContentContext> _context;
    id <FCTagProviding> _tag;
    FCTagRelationships *_resultTagRelationships;
}

@property (copy, nonatomic, readonly) id <FCContentContext> context;
@property (copy, nonatomic, readonly) id <FCTagProviding> tag;
@property (retain, nonatomic) FCTagRelationships *resultTagRelationships;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (id)initWithContext:(id)arg1 tag:(id)arg2;

@end
