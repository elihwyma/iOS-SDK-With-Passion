/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RBEventQueueEvent : NSObject

{
    id _context;
    double _eventTime;
    CDUnknownBlockType _action;
}

@property (retain, nonatomic) id context;
@property (nonatomic) double eventTime;
@property (copy, nonatomic) CDUnknownBlockType action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)compare:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
