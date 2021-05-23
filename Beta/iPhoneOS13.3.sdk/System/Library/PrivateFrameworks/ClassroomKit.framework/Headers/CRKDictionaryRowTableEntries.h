/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CRKDictionaryRowTableEntries : NSObject

{
    NSArray *mObjects;
    NSArray *mKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)rowCount;
- (unsigned long long)columnCount;
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)initWithDictionaryObjects:(id)arg1 keys:(id)arg2;

@end
