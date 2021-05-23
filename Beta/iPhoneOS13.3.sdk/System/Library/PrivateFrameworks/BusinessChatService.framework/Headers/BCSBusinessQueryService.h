/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class NSDate, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface BCSBusinessQueryService : NSObject

{
    NSXPCConnection *_connection;
    NSDate *_lastTimeoutDate;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}

@property (retain) NSXPCConnection *connection;
@property (retain) NSDate *lastTimeoutDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;

- (void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1;
- (id)businessItemForPhoneNumber:(id)arg1 isMessageable:(_Bool *)arg2 isChatSuggestVisible:(_Bool *)arg3 error:(id *)arg4;
- (void)_deleteInMemoryCache;
- (void)_fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchBusinessItemWithPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchBusinessItemWithBizID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchIsBusinessPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSquareIconDataForBusinessItem:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
