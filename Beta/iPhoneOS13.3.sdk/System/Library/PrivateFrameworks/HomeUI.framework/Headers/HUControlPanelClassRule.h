/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString, Protocol;

@interface HUControlPanelClassRule : NSObject

{
    double _priority;
    Class _class;
    Protocol *_protocol;
}

@property (copy, nonatomic) Class class;
@property (retain, nonatomic) Protocol *protocol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double priority;

+ (id)ruleWithControlItemClass:(Class)arg1;
+ (id)ruleWithControlItemProtocol:(id)arg1;

- (_Bool)ruleMatchesItem:(id)arg1;
- (id)initWithControlItemClass:(Class)arg1 protocol:(id)arg2;

@end
