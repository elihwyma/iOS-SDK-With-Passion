/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCPersistedState : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_assertionQueue;
}

@property (weak, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)assertQueue;

@end
