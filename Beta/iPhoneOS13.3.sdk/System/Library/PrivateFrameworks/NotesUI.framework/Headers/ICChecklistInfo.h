/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface ICChecklistInfo : NSObject

{
    unsigned long long _numberOfItems;
    unsigned long long _numberOfCheckedItems;
    unsigned long long _numberOfUncheckedItems;
}

@property (nonatomic) unsigned long long numberOfItems;
@property (nonatomic) unsigned long long numberOfCheckedItems;
@property (nonatomic) unsigned long long numberOfUncheckedItems;

@end
