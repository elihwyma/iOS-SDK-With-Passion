/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface PHAPredicateValidator : NSObject

{
    NSSet *_allowedKeyPaths;
}

@property (retain) NSSet *allowedKeyPaths;

- (_Bool)validateValue:(id)arg1 error:(id *)arg2;
- (_Bool)validatePredicate:(id)arg1 error:(id *)arg2;
- (_Bool)validateExpression:(id)arg1 error:(id *)arg2;

@end
