/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKContactsSearchManager, NSArray, NSString;

@interface CKSpringBoardActionManager : NSObject

{
    _Bool shouldHideGroupsDonations;
    CKContactsSearchManager *_contactsSearchManager;
    NSArray *_conversationCache;
}

@property (retain, nonatomic) CKContactsSearchManager *contactsSearchManager;
@property (copy, nonatomic) NSArray *conversationCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool shouldHideGroupsDonations;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)chatStateChanged:(id)arg1;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (id)conversationCacheForContactsSearchManager:(id)arg1;
- (void)updateShortcutItems;

@end
