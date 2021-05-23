/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMessagePersistence, EFQuery, EMMailboxScope, NSCache, NSString;

@interface EDMessageQueryEvaluator : NSObject

{
    EFQuery *_messageQuery;
    EDMessagePersistence *_messagePersistence;
    EMMailboxScope *_mailboxScope;
    NSCache *_spotlightPredicateCache;
}

@property (nonatomic, readonly) EFQuery *messageQuery;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (retain, nonatomic) NSCache *spotlightPredicateCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2;
- (id)transformMessages:(id)arg1;
- (id)filterMessages:(id)arg1 unmatchedMessages:(id *)arg2;
- (id)transformAndFilterMessages:(id)arg1;
- (id)transformAndFilterMessages:(id)arg1 includeDeleted:(_Bool)arg2;
- (id)transformMessages:(id)arg1 includeDeleted:(_Bool)arg2;

@end
