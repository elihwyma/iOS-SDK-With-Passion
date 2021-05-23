/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray;

@interface PXImportSessionInfo : NSObject

{
    _Bool _importComplete;
    _Bool _importStopped;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_itemsToImport;
    NSMutableArray *_importedItems;
    NSMutableArray *_errorItems;
    long long _completedItemsCount;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *itemsToImport;
@property (nonatomic) _Bool importComplete;
@property (nonatomic) _Bool importStopped;
@property (retain, nonatomic) NSMutableArray *importedItems;
@property (retain, nonatomic) NSMutableArray *errorItems;
@property (nonatomic) long long completedItemsCount;

@end
