/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSArray, NSURL;

@interface IKTimelineElement : IKViewElement

@property (retain, nonatomic, readonly) IKTextElement *title;
@property (retain, nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) unsigned long long timelineType;
@property (retain, nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) double refreshInterval;

@end
