/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString, PRLikeness;

@interface CNUIPRLikenessProvider : NSObject

{
    PRLikeness *_likeness;
}

@property (nonatomic, readonly) PRLikeness *likeness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_cnui_likeness;
- (id)initWithPRLikeness:(id)arg1;
- (unsigned long long)_cnui_likenessType;

@end
