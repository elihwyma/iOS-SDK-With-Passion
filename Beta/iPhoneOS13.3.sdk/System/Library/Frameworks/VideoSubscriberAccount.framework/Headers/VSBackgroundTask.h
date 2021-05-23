/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, NSString;

@protocol VSBackgroundTaskDelegate;

@interface VSBackgroundTask : NSObject

{
    NSString *_name;
    id <VSBackgroundTaskDelegate> _delegate;
    BKSProcessAssertion *_assertion;
}

@property (retain, nonatomic) BKSProcessAssertion *assertion;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id <VSBackgroundTaskDelegate> delegate;

- (id)init;
- (void)end;
- (_Bool)begin;

@end
