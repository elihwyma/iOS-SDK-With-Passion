/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFSQLBinding.h>

@interface _EFSQLDoubleBinding : EFSQLBinding

{
    double _doubleValue;
}

@property (nonatomic, readonly) double doubleValue;

- (id)initWithDouble:(double)arg1;
- (void)bindTo:(struct sqlite3_stmt *)arg1 withSQLIndex:(int)arg2;

@end
