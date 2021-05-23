/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSArray, NSString;

@interface EFSQLFunction : NSObject <Swift>

{
    NSString *_name;
    NSArray *_arguments;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *arguments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

+ (id)min:(id)arg1;
+ (id)max:(id)arg1;
+ (id)abs:(id)arg1;
+ (id)length:(id)arg1;
+ (id)coalesce:(id)arg1;
+ (id)char:(id)arg1;
+ (id)glob:(id)arg1 expression:(id)arg2;
+ (id)hex:(id)arg1;
+ (id)ifNull:(id)arg1 second:(id)arg2;
+ (id)inStr:(id)arg1 second:(id)arg2;
+ (id)like:(id)arg1 expression:(id)arg2;
+ (id)like:(id)arg1 expression:(id)arg2 escape:(unsigned short)arg3;
+ (id)lower:(id)arg1;
+ (id)ltrim:(id)arg1 pattern:(id)arg2;
+ (id)nullIf:(id)arg1 second:(id)arg2;
+ (id)replace:(id)arg1 pattern:(id)arg2 replacement:(id)arg3;
+ (id)round:(id)arg1 digits:(id)arg2;
+ (id)rtrim:(id)arg1 pattern:(id)arg2;
+ (id)substr:(id)arg1 index:(id)arg2 length:(id)arg3;
+ (id)trim:(id)arg1 pattern:(id)arg2;
+ (id)typeOf:(id)arg1;
+ (id)upper:(id)arg1;
+ (id)likely:(id)arg1;
+ (id)unlikely:(id)arg1;

- (id)initWithName:(id)arg1 arguments:(id)arg2;
- (id)ef_aggregateColumnExpression;

@end
