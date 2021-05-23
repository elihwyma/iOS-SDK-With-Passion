/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@interface CNUICoreContactPropertyFilterBuilder : NSObject

{
    _Bool _excludeNickname;
    _Bool _excludePhoto;
    _Bool _excludeNote;
    _Bool _excludeRelationships;
}

@property (nonatomic) _Bool excludeNickname;
@property (nonatomic) _Bool excludePhoto;
@property (nonatomic) _Bool excludeNote;
@property (nonatomic) _Bool excludeRelationships;

+ (id)whitelistedContactsFilterBuilder;
+ (id)managedContactsFilterBuilder;

- (id)build;

@end
