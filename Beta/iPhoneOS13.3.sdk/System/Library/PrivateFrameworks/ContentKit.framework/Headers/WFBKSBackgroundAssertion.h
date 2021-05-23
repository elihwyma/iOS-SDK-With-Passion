/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFBackgroundAssertion.h>

@class BKSProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface WFBKSBackgroundAssertion : WFBackgroundAssertion

{
    NSString *_taskName;
    CDUnknownBlockType _expirationHandler;
    BKSProcessAssertion *_assertion;
    id _observer;
}

@property (copy, nonatomic, readonly) NSString *taskName;
@property (copy, nonatomic) CDUnknownBlockType expirationHandler;
@property (retain, nonatomic) BKSProcessAssertion *assertion;
@property (retain, nonatomic) id observer;

+ (id)backgroundAssertionWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;

- (void)end;
- (id)initWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;

@end
