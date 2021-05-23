/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSIndexSet;

@interface _MFTableViewModelDiff : NSObject

{
    NSIndexSet *_changedRows;
    NSIndexSet *_deletedRows;
    NSIndexSet *_insertedRows;
}

@property (retain, nonatomic) NSIndexSet *changedRows;
@property (retain, nonatomic) NSIndexSet *deletedRows;
@property (retain, nonatomic) NSIndexSet *insertedRows;

@end
