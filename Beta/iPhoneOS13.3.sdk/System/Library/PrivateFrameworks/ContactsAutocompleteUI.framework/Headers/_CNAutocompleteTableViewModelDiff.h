/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class NSIndexSet;

@interface _CNAutocompleteTableViewModelDiff : NSObject

{
    NSIndexSet *_changedRows;
    NSIndexSet *_deletedRows;
    NSIndexSet *_insertedRows;
}

@property (retain, nonatomic) NSIndexSet *changedRows;
@property (retain, nonatomic) NSIndexSet *deletedRows;
@property (retain, nonatomic) NSIndexSet *insertedRows;

@end
