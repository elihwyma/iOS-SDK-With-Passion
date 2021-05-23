/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol IKEngineDelegate;

@interface IKEngine : NSObject

{
    id <IKEngineDelegate> _delegate;
    NSString *_OAuthToken;
    NSString *_OAuthTokenSecret;
    NSMutableDictionary *_connections;
}

@property (nonatomic) id <IKEngineDelegate> delegate;
@property (copy, nonatomic) NSString *OAuthToken;
@property (copy, nonatomic) NSString *OAuthTokenSecret;

+ (void)setOAuthConsumerKey:(id)arg1 andConsumerSecret:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)deleteBookmark:(id)arg1 userInfo:(id)arg2;
- (void)cancelConnection:(id)arg1;
- (void)cancelAllConnections;
- (id)connectionForIdentifier:(id)arg1;
- (id)identifierForConnection:(id)arg1;
- (unsigned long long)numberOfConnections;
- (id)authTokenForUsername:(id)arg1 password:(id)arg2 userInfo:(id)arg3;
- (id)verifyCredentialsWithUserInfo:(id)arg1;
- (id)bookmarksWithUserInfo:(id)arg1;
- (id)bookmarksInFolder:(id)arg1 limit:(unsigned long long)arg2 existingBookmarks:(id)arg3 userInfo:(id)arg4;
- (id)updateReadProgressOfBookmark:(id)arg1 toProgress:(double)arg2 userInfo:(id)arg3;
- (id)addBookmarkWithURL:(id)arg1 userInfo:(id)arg2;
- (id)addBookmarkWithURL:(id)arg1 title:(id)arg2 description:(id)arg3 folder:(id)arg4 resolveFinalURL:(_Bool)arg5 userInfo:(id)arg6;
- (id)starBookmark:(id)arg1 userInfo:(id)arg2;
- (id)unstarBookmark:(id)arg1 userInfo:(id)arg2;
- (id)archiveBookmark:(id)arg1 userInfo:(id)arg2;
- (id)unarchiveBookmark:(id)arg1 userInfo:(id)arg2;
- (id)moveBookmark:(id)arg1 toFolder:(id)arg2 userInfo:(id)arg3;
- (id)textOfBookmark:(id)arg1 userInfo:(id)arg2;
- (id)foldersWithUserInfo:(id)arg1;
- (id)addFolderWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)deleteFolder:(id)arg1 userInfo:(id)arg2;
- (id)orderFolders:(id)arg1 userInfo:(id)arg2;
- (id)_startConnectionWithAPIPath:(id)arg1 bodyArguments:(id)arg2 type:(int)arg3 userInfo:(id)arg4 context:(id)arg5;
- (id)_signatureWithKey:(id)arg1 baseString:(id)arg2;

@end
