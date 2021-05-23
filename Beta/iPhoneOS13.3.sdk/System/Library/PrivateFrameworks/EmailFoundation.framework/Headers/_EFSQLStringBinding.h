/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFSQLBinding.h>

@class NSString;

@interface _EFSQLStringBinding : EFSQLBinding

{
    NSString *_stringValue;
}

@property (copy, nonatomic, readonly) NSString *stringValue;

- (id)initWithString:(id)arg1;
- (void)bindTo:(struct sqlite3_stmt *)arg1 withSQLIndex:(int)arg2;

@end
