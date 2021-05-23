/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAction;

@interface SXButtonComponentActionProvider : NSObject

{
    id <SXAction> _action;
}

@property (nonatomic, readonly) id <SXAction> action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithAction:(id)arg1;

@end
