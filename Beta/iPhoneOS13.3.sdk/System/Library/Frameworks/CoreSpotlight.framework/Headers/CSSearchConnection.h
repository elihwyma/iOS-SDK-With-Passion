/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;

@interface CSSearchConnection : CSXPCConnection

{
    _Bool _previouslyInitialized;
    NSMutableDictionary *_queries;
}

@property (retain, nonatomic) NSMutableDictionary *queries;
@property (nonatomic, readonly) _Bool previouslyInitialized;

+ (id)sharedCSUserFSConnection;
+ (id)sharedSearchConnection;

- (id)init;
- (void)handleError:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleReply:(id)arg1;
- (id)removeQueryForID:(id)arg1;
- (void)startQuery:(id)arg1 context:(id)arg2;
- (id)queryForID:(id)arg1;
- (void)setQuery:(id)arg1 forID:(id)arg2;
- (id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(_Bool)arg4;
- (void)cancelQuery:(unsigned long long)arg1;

@end
