/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class MTConfig, MTEventHandlers, MTSystem, MTUtils, NSString;

@protocol MTDelegatePackage;

@interface MTMetricsKitTemplate : NSObject

{
    NSString *_topic;
    MTEventHandlers *_eventHandlers;
    MTUtils *_utils;
    MTConfig *_config;
    MTSystem *_system;
    id <MTDelegatePackage> _delegatePackage;
}

@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) MTConfig *config;
@property (retain, nonatomic) MTEventHandlers *eventHandlers;
@property (retain, nonatomic) MTSystem *system;
@property (retain, nonatomic) MTUtils *utils;
@property (retain, nonatomic) id <MTDelegatePackage> delegatePackage;

+ (id)kitWithTopic:(id)arg1 bagProfile:(id)arg2 profileVersion:(id)arg3;

- (id)initWithTopic:(id)arg1;
- (id)initWithTopic:(id)arg1 delegatePackage:(id)arg2;
- (id)initWithTopic:(id)arg1 bagProfile:(id)arg2 profileVersion:(id)arg3;

@end
