/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EFSQLPreparedStatement : NSObject

{
    struct sqlite3_stmt *_compiled;
    double _allowedExecutionTime;
}

@property (nonatomic, readonly) _Bool isFinalized;
@property (copy, nonatomic, readonly) NSString *originalString;
@property (nonatomic, readonly) struct sqlite3_stmt *compiled;
@property (nonatomic) double allowedExecutionTime;

+ (id)log;

- (void)dealloc;
- (id)debugDescription;
- (_Bool)executeWithIndexedBindings:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)executeWithNamedBindings:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)executeUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)finalizeWithError:(id *)arg1;
- (id)initWithString:(id)arg1 connection:(id)arg2;
- (_Bool)clearBindingsWithError:(id *)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)executeWithNamedBindings:(id)arg1 rowsChanged:(unsigned long long *)arg2 error:(id *)arg3;

@end
