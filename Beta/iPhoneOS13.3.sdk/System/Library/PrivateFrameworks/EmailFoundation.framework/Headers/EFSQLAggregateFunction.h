/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSArray, NSString;

@interface EFSQLAggregateFunction : NSObject <Swift>

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

+ (id)sum:(id)arg1;
+ (id)count:(id)arg1;
+ (id)min:(id)arg1;
+ (id)max:(id)arg1;
+ (id)avg:(id)arg1;
+ (id)total:(id)arg1;
+ (id)avgDistinct:(id)arg1;
+ (id)countDistinct:(id)arg1;
+ (id)groupConcat:(id)arg1 separator:(id)arg2;
+ (id)maxDistinct:(id)arg1;
+ (id)minDistinct:(id)arg1;
+ (id)sumDistinct:(id)arg1;
+ (id)totalDistinct:(id)arg1;

- (id)initWithName:(id)arg1 arguments:(id)arg2;
- (id)ef_aggregateColumnExpression;

@end
