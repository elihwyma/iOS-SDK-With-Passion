/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CRKClassNameSubstitutionRequestToOperationClassMapper : NSObject

{
    NSArray *mAllowedPrefixes;
    NSString *mOperationPrefix;
}

- (id)init;
- (id)initWithAllowedRequestPrefixes:(id)arg1 operationPrefix:(id)arg2;
- (id)stringByApplyingOperationSuffixToString:(id)arg1;
- (id)stringByApplyingOperationPrefixToString:(id)arg1;
- (id)prefixForString:(id)arg1;
- (Class)operationClassForRequest:(id)arg1;

@end
