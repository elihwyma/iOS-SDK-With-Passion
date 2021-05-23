/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface HUIconContentViewReuseQueue : NSObject

{
    Class _contentViewClass;
    NSMutableArray *_reuseStack;
}

@property (nonatomic, readonly) NSMutableArray *reuseStack;
@property (nonatomic, readonly) Class contentViewClass;

+ (id)globalReuseQueueForContentViewClass:(Class)arg1;

- (id)init;
- (id)initWithContentViewClass:(Class)arg1;
- (id)dequeueContentView;
- (void)reapContentView:(id)arg1;

@end
