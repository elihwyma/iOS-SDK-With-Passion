/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKTable, NSArray;

@interface CRKKeyValueTable : NSObject

{
    CRKTable *_table;
    NSArray *_keyValuePairs;
}

@property (copy, nonatomic, readonly) NSArray *keyValuePairs;
@property (nonatomic, readonly) CRKTable *table;

- (id)initWithDictionary:(id)arg1;
- (id)initWithKeyValuePairs:(id)arg1;
- (id)crk_JSONRepresentationWithPrettyPrinting:(_Bool)arg1 sortKeys:(_Bool)arg2;
- (id)tableString;

@end
