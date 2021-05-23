/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

#import <ContactsUI/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberContactItem : NSObject <Swift>

{
    _Bool _unreachable;
    NSString *_label;
    NSString *_detailLabel;
    NSString *_contactIdentifier;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *detailLabel;
@property (nonatomic, readonly, getter=isUnreachable) _Bool unreachable;

+ (id)familyMemberContactItemFromCoreFamilyMemberContactItem:(id)arg1;
+ (id)typeLabelStringFromContactType:(long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 detailLabel:(id)arg2 unreachable:(_Bool)arg3;
- (id)initWithContactIdentifier:(id)arg1 label:(id)arg2 detailLabel:(id)arg3 unreachable:(_Bool)arg4;

@end
