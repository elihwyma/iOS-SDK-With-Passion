/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class NSDate;

@interface IKTimelineEventElement : IKViewElement

@property (nonatomic, readonly) double offset;
@property (retain, nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) double duration;
@property (retain, nonatomic, readonly) IKViewElement *relatedContent;

@end
