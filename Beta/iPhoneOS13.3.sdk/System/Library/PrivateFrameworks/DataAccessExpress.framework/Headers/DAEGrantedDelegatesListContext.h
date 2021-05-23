/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSObject.h>

@interface DAEGrantedDelegatesListContext : NSObject

{
    CDUnknownBlockType _resultsBlock;
}

- (id)initWithResultsBlock:(CDUnknownBlockType)arg1;
- (void)finishedWithResults:(id)arg1 error:(id)arg2;

@end
