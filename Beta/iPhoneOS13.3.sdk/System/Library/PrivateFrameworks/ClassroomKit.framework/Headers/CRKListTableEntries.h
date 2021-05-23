/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CRKListTableEntries : NSObject

{
    NSArray *mArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithArray:(id)arg1;
- (unsigned long long)rowCount;
- (unsigned long long)columnCount;
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;

@end
