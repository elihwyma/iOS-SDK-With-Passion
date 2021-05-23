/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFSQLBinding.h>

@class NSData;

@interface _EFSQLDataBinding : EFSQLBinding

{
    NSData *_dataValue;
}

@property (copy, nonatomic, readonly) NSData *dataValue;

- (id)initWithData:(id)arg1;
- (void)bindTo:(struct sqlite3_stmt *)arg1 withSQLIndex:(int)arg2;

@end
