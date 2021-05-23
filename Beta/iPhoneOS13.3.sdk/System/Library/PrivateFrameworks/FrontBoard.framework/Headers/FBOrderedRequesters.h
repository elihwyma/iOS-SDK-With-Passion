/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface FBOrderedRequesters : NSObject

{
    NSMutableArray *_bands[4];
}

- (id)init;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)removeRequester:(id)arg1;
- (id)requesters;
- (_Bool)containsRequester:(id)arg1 inBand:(int)arg2;
- (void)addRequester:(id)arg1 toBand:(int)arg2;
- (void)prioritizeRequester:(id)arg1;
- (id)highestPriorityRequester;
- (id)lowestPriorityRequester;

@end
