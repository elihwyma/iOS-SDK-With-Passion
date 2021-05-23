/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MessageLegacy/MFMailboxUid.h>

@class NSString;

@interface MFFakeMailboxUid : MFMailboxUid

{
    _Bool _fakeIsSpecialMailboxUid;
    NSString *_displayName;
    NSString *_fakeFullPath;
    NSString *_fakeURLString;
}

@property (copy, nonatomic) NSString *fakeFullPath;
@property (copy, nonatomic) NSString *fakeURLString;
@property (nonatomic) _Bool fakeIsSpecialMailboxUid;
@property (retain, nonatomic) NSString *displayName;

- (id)store;
- (id)fullPath;
- (id)URLString;
- (_Bool)isStore;
- (_Bool)isSpecialMailboxUid;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(_Bool)arg4;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3;

@end
