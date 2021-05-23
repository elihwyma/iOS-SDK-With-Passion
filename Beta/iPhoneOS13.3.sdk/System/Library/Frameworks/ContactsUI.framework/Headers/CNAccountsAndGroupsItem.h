/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsItem : NSObject

{
    _Bool _selected;
    _Bool _bypassIfUnique;
    _Bool _soloSelect;
    NSString *_name;
    CDUnknownBlockType _nameProvider;
    NSString *_identifier;
    long long _containerType;
    NSArray *_childItems;
    CNAccountsAndGroupsItem *_parentItem;
    long long _type;
}

@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic, readonly) CDUnknownBlockType nameProvider;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long containerType;
@property (retain, nonatomic) NSArray *childItems;
@property (weak, nonatomic) CNAccountsAndGroupsItem *parentItem;
@property (nonatomic) _Bool bypassIfUnique;
@property (nonatomic) _Bool soloSelect;
@property (nonatomic, readonly) long long type;
@property (nonatomic, getter=isSelected) _Bool selected;

- (long long)localizedCompare:(id)arg1;
- (id)initWithType:(long long)arg1 nameProvider:(CDUnknownBlockType)arg2;
- (void)_setSelected:(_Bool)arg1 affectingChildren:(_Bool)arg2;
- (id)arrayForDisplay:(_Bool)arg1;

@end
