/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsSection : NSObject

{
    NSArray *_items;
    CDUnknownBlockType _titleProvider;
    NSString *_title;
}

@property (copy, nonatomic) CDUnknownBlockType titleProvider;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *items;

@end
