/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EFSQLBinding : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) EFSQLBinding *ef_SQLBinding;

+ (id)bindingWithData:(id)arg1;
+ (id)bindingWithDouble:(double)arg1;
+ (id)bindingWithInt64:(long long)arg1;
+ (id)bindingWithString:(id)arg1;
+ (id)nullBinding;

- (void)bindTo:(struct sqlite3_stmt *)arg1 withSQLIndex:(int)arg2;
- (void)bindToStatement:(id)arg1 usingIndex:(unsigned long long)arg2;
- (void)bindToStatement:(id)arg1 usingName:(id)arg2;

@end
