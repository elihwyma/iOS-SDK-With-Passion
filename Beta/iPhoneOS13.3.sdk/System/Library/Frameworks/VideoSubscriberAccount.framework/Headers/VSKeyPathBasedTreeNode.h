/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <VideoSubscriberAccount/VSTreeNode.h>

@class NSString;

@interface VSKeyPathBasedTreeNode : VSTreeNode

{
    NSString *_keyPath;
}

@property (copy, nonatomic, readonly) NSString *keyPath;

- (id)init;
- (id)initWithRepresentedObject:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1 keyPath:(id)arg2;

@end
