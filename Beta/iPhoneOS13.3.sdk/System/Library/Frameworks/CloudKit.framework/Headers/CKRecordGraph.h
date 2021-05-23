/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSArray, NSMutableArray;

@interface CKRecordGraph : NSObject

{
    NSMutableArray *_nodes;
    NSArray *_sortedRecords;
}

@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSArray *sortedRecords;

+ (id)topologicallySortRecords:(id)arg1 withError:(id *)arg2;

- (id)init;
- (id)description;
- (_Bool)addRecords:(id)arg1 error:(id *)arg2;
- (id)recordsByTopologicalSortWithError:(id *)arg1;

@end
