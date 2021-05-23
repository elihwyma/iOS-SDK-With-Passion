/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface MFMailMessageStoreSearchResult : NSObject

{
    NSDate *_continueOffset;
    NSMutableDictionary *_mailboxToRemoteIdDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *mailboxToRemoteIdDictionary;
@property (nonatomic, readonly) unsigned long long count;
@property (retain, nonatomic) NSDate *continueOffset;

- (id)init;
- (void)dealloc;
- (void)addRemoteID:(id)arg1 mailbox:(id)arg2;
- (void)enumerateMailboxesAndRemoteIDsUsingBlock:(CDUnknownBlockType)arg1;

@end
