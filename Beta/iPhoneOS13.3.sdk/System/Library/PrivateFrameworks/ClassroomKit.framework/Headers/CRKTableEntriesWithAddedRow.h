/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol CRKTableEntries;

@interface CRKTableEntriesWithAddedRow : NSObject

{
    id <CRKTableEntries> mOrigin;
    unsigned long long mIndex;
    NSArray *mEntries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)rowCount;
- (unsigned long long)columnCount;
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)initWithOrigin:(id)arg1 index:(unsigned long long)arg2 entries:(id)arg3;

@end
