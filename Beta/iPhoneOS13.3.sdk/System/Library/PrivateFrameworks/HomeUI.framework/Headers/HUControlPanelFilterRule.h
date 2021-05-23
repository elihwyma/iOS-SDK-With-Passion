/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HUControlPanelFilterRule : NSObject

{
    double _priority;
    CDUnknownBlockType _filter;
}

@property (copy, nonatomic) CDUnknownBlockType filter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double priority;

+ (id)ruleWithFilter:(CDUnknownBlockType)arg1;

- (id)initWithFilter:(CDUnknownBlockType)arg1;
- (_Bool)ruleMatchesItem:(id)arg1;

@end
