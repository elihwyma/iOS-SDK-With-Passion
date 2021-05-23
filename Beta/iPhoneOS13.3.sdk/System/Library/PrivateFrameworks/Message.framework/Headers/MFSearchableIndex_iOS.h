/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDSearchableIndex.h>

@class NSString;

@interface MFSearchableIndex_iOS : EDSearchableIndex

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (_Bool)isPluggedIn;
- (id)powerObservable;
- (id)initWithName:(id)arg1 dataSource:(id)arg2 reasonProvider:(id)arg3;
- (void)_indexMessage:(id)arg1 includeBody:(_Bool)arg2 indexingType:(long long)arg3;
- (void)indexMessages:(id)arg1 includeBody:(_Bool)arg2 indexingType:(long long)arg3;
- (_Bool)canIndexAttachments;
- (void)logPowerEventWithIdentifier:(id)arg1 eventData:(id)arg2;
- (_Bool)shouldCancelSearchQuery;
- (void)addSearchQueryCancelable:(id)arg1;
- (void)removeSearchQueryCancelable:(id)arg1;

@end
