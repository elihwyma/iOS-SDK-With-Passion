/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SUCoreFSMAttachedAction : NSObject

{
    NSString *_fsmAction;
    id _actionDelegate;
    Class _eventInfoClass;
}

@property (retain, nonatomic, readonly) NSString *fsmAction;
@property (weak, nonatomic, readonly) id actionDelegate;
@property (retain, nonatomic, readonly) Class eventInfoClass;

- (id)description;
- (id)initWithAction:(id)arg1 usingDelegate:(id)arg2 withInfoClass:(Class)arg3;

@end
