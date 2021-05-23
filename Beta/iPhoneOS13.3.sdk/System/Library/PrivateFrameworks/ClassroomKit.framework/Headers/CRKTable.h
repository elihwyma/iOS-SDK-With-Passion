/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKTableEntries;

@interface CRKTable : NSObject

{
    id <CRKTableEntries> mEntries;
}

@property (copy, nonatomic, readonly) NSString *stringValue;

+ (id)tableWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3;
+ (id)parsableTableWithKeyValuePairs:(id)arg1;

- (id)initWithEntries:(id)arg1;
- (id)columnLengths;
- (unsigned long long)lengthOfLongestObjectInColumn:(unsigned long long)arg1;

@end
