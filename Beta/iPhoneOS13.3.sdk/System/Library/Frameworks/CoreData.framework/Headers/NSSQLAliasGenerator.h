/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLAliasGenerator : NSObject

{
    unsigned int _nextTableAlias;
    unsigned int _nextVariableAlias;
    unsigned int _nextTempTableAlias;
    NSString *_tableBase;
    NSString *_variableBase;
}

- (id)init;
- (void)dealloc;
- (id)generateVariableAlias;
- (id)initWithNestingLevel:(unsigned int)arg1;
- (id)generateTableAlias;
- (id)generateSubqueryVariableAlias;
- (id)generateTempTableName;

@end
