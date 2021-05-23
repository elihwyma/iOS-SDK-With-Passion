/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface _EFSQLInsertStatementValue : NSObject

{
    NSMutableOrderedSet *_requiredColumns;
    NSMutableDictionary *_bindables;
    NSMutableDictionary *_expressables;
}

@property (retain, nonatomic) NSMutableOrderedSet *requiredColumns;
@property (retain, nonatomic) NSMutableDictionary *bindables;
@property (retain, nonatomic) NSMutableDictionary *expressables;

- (id)initWithRequiredColumns:(id)arg1;

@end
