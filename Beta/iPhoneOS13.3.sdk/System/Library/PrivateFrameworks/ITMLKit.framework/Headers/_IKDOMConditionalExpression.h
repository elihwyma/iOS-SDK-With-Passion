/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface _IKDOMConditionalExpression : NSObject

{
    _Bool _isNegated;
    NSArray *_operations;
    NSSet *_dependentPathStrings;
}

@property (copy, nonatomic, readonly) NSSet *dependentPathStrings;

+ (id)expressionFromString:(id)arg1;
+ (id)parseExpressionsFromString:(id)arg1;

- (_Bool)passesForDataItem:(id)arg1;
- (id)initWithOperations:(id)arg1 dependentPathStrings:(id)arg2 isNegated:(_Bool)arg3;

@end
