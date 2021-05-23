/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContact;

@interface CNUICoreContactEdit : NSObject

{
    CNContact *_original;
    CNContact *_modified;
}

@property (nonatomic, readonly) CNContact *original;
@property (nonatomic, readonly) CNContact *modified;
@property (nonatomic, readonly) _Bool originalAndModifiedDiffer;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithContact:(id)arg1;
- (id)initWithOriginalContact:(id)arg1 modifiedContact:(id)arg2;
- (id)editBySettingModifiedContact:(id)arg1;
- (_Bool)modifiesContact:(id)arg1;

@end
