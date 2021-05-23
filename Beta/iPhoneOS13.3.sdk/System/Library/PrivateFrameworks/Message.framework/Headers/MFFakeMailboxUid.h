/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFFakeMailboxUid : MFMailboxUid

{
    _Bool _fakeIsSpecialMailboxUid;
    NSString *_displayName;
    NSString *_fakeFullPath;
    NSString *_fakeURLString;
    long long _fakeMailboxID;
}

@property (copy, nonatomic) NSString *fakeFullPath;
@property (copy, nonatomic) NSString *fakeURLString;
@property (nonatomic) _Bool fakeIsSpecialMailboxUid;
@property (nonatomic) long long fakeMailboxID;
@property (retain, nonatomic) NSString *displayName;

- (id)URL;
- (id)store;
- (id)fullPath;
- (id)URLString;
- (long long)mailboxID;
- (_Bool)isStore;
- (_Bool)isSpecialMailboxUid;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(_Bool)arg4;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(_Bool)arg4 mailboxID:(long long)arg5;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3;

@end
