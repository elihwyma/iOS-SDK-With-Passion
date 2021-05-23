/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSTextTable;

@interface NSRTFReaderTableState : NSObject

{
    NSTextTable *_currentTable;
    NSTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    int _currentRow;
    int _currentColumn;
    int _currentDefinitionColumn;
    _Bool _currentRowIsLast;
}

- (void)dealloc;

@end
