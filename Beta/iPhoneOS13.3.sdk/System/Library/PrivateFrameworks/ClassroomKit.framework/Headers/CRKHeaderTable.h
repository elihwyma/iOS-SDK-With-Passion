/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKTable, NSArray;

@interface CRKHeaderTable : NSObject

{
    CRKTable *_table;
    NSArray *_headers;
    NSArray *_keyPaths;
    NSArray *_objects;
}

@property (copy, nonatomic, readonly) NSArray *headers;
@property (copy, nonatomic, readonly) NSArray *keyPaths;
@property (copy, nonatomic, readonly) NSArray *objects;
@property (nonatomic, readonly) CRKTable *table;

- (id)crk_JSONRepresentationWithPrettyPrinting:(_Bool)arg1 sortKeys:(_Bool)arg2;
- (id)tableString;
- (id)initWithHeaders:(id)arg1 keyPaths:(id)arg2 objects:(id)arg3;

@end
