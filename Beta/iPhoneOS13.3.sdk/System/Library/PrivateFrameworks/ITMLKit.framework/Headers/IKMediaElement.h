/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class NSArray;

@interface IKMediaElement : IKViewElement

@property (retain, nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) unsigned long long scrubBehavior;
@property (nonatomic, readonly) IKViewElement *relatedContent;

@end
