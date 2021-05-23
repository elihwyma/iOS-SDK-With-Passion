/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSOperation;

@interface VSAccountManagerResult : NSObject

{
    NSOperation *_operation;
}

@property (retain, nonatomic) NSOperation *operation;

- (id)init;
- (void)cancel;
- (id)initWithOperation:(id)arg1;

@end
