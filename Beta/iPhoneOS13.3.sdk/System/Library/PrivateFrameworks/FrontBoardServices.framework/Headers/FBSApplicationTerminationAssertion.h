/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSTerminationAssertion, NSString;

@protocol OS_dispatch_queue;

@interface FBSApplicationTerminationAssertion : NSObject

{
    BKSTerminationAssertion *_assertion;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_bundleID;
    NSString *_reason;
    long long _assertionState;
}

@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) long long assertionState;

+ (id)_queue;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithBundleID:(id)arg1 reason:(id)arg2 acquisitionHandler:(CDUnknownBlockType)arg3;

@end
