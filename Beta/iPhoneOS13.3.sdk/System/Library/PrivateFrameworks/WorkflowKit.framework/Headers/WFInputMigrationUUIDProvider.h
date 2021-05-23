/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFAction;

@interface WFInputMigrationUUIDProvider : NSObject

{
    WFAction *_action;
    unsigned long long _position;
}

@property (nonatomic, readonly) WFAction *action;
@property (nonatomic, readonly) unsigned long long position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)generateOutputUUIDForAction:(id)arg1;
- (id)initWithAction:(id)arg1 atPosition:(unsigned long long)arg2;

@end
