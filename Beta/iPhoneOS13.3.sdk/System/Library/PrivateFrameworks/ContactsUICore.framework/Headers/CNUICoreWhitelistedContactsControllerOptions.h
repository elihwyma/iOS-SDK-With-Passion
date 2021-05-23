/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@interface CNUICoreWhitelistedContactsControllerOptions : NSObject

{
    _Bool _shouldPrepopulateEmptyWhitelist;
    _Bool _shouldRequireConfirmationOfChanges;
}

@property (nonatomic, readonly) _Bool shouldPrepopulateEmptyWhitelist;
@property (nonatomic, readonly) _Bool shouldRequireConfirmationOfChanges;

+ (id)iosOptions;
+ (id)macOptions;

- (id)init;
- (id)initWithShouldPrepopulateEmptyWhitelist:(_Bool)arg1 shouldRequireConfirmationOfChanges:(_Bool)arg2;

@end
