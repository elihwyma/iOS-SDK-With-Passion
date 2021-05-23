/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class ENAuthCacheEntry, NSMutableDictionary;

@interface ENAuthCache : NSObject

{
    NSMutableDictionary *_linkedCache;
    ENAuthCacheEntry *_businessCache;
}

@property (retain, nonatomic) NSMutableDictionary *linkedCache;
@property (retain, nonatomic) ENAuthCacheEntry *businessCache;

- (id)init;
- (void)setAuthenticationResult:(id)arg1 forLinkedNotebookGuid:(id)arg2;
- (id)authenticationResultForLinkedNotebookGuid:(id)arg1;
- (void)setAuthenticationResultForBusiness:(id)arg1;
- (id)authenticationResultForBusiness;

@end
