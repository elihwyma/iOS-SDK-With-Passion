/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTableGrid : NSObject

{
    NSMutableArray *mColumns;
}

- (id)init;
- (id)description;
- (unsigned long long)columnCount;
- (id)columnAtIndex:(unsigned long long)arg1;
- (id)addColumn;
- (void)flipColumnsRTL;

@end
