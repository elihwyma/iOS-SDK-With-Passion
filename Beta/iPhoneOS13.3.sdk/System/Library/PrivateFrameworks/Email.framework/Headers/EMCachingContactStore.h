/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class CNContactStore, EFLazyCache;

@interface EMCachingContactStore : NSObject

{
    CNContactStore *_cnStore;
    EFLazyCache *_displayNameCache;
}

@property (retain, nonatomic) EFLazyCache *displayNameCache;
@property (nonatomic, readonly) CNContactStore *cnStore;

- (id)init;
- (id)initWithStore:(id)arg1;
- (void)_invalidateDisplayNameCache;
- (id)displayNameForEmailAddress:(id)arg1 abbreviated:(_Bool)arg2;
- (id)_fetchDisplayNameForEmailAddress:(id)arg1 abbreviated:(_Bool)arg2;
- (id)displayNameForEmailAddress:(id)arg1;

@end
