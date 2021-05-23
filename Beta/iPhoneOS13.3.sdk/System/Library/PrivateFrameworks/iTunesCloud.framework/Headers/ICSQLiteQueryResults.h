/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICSQLiteStatement, NSNumber, NSString;

@interface ICSQLiteQueryResults : NSObject

{
    ICSQLiteStatement *_statement;
}

@property (nonatomic, readonly) long long firstInt64Value;
@property (copy, nonatomic, readonly) NSNumber *firstNumberValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStatement:(id)arg1;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)bindData:(id)arg1 atPosition:(int)arg2;
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;
- (void)bindInt:(int)arg1 atPosition:(int)arg2;
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;
- (void)bindNullAtPosition:(int)arg1;
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;
- (void)bindString:(id)arg1 atPosition:(int)arg2;
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;
- (int)clearBindings;

@end
