/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSEnumerator.h>

@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator

{
    _Bool _closed;
    CKSQLiteStatement *_statement;
    CDUnknownBlockType _block;
}

@property (retain, nonatomic) CKSQLiteStatement *statement;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic) _Bool closed;

- (void)dealloc;
- (id)nextObject;
- (void)close;
- (id)initWithStatement:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
