/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSSQLiteStatement, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteQueryResults : NSObject

{
    AMSSQLiteStatement *_statement;
}

@property (nonatomic, readonly) long long firstInt64Value;
@property (copy, nonatomic, readonly) NSNumber *firstNumberValue;
@property (nonatomic, readonly) _Bool hasRows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStatement:(id)arg1;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)bindArray:(id)arg1 atPosition:(int)arg2;
- (void)bindData:(id)arg1 atPosition:(int)arg2;
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindDate:(id)arg1 atPosition:(int)arg2;
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;
- (void)bindInt:(int)arg1 atPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;
- (void)bindNullAtPosition:(int)arg1;
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;
- (void)bindString:(id)arg1 atPosition:(int)arg2;
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindURL:(id)arg1 atPosition:(int)arg2;
- (int)clearBindings;

@end
