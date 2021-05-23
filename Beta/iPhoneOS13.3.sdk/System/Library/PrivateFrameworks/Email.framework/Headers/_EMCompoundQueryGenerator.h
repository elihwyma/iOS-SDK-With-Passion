/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _EMCompoundQueryGenerator : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)queryExpressionFromPredicate:(id)arg1 propertyMapper:(id)arg2 languages:(id)arg3;
- (long long)operandFromPredicate:(id)arg1;

@end
