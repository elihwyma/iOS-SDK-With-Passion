/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKCollectionElement.h>

@class IKViewElement;

@interface IKListElement : IKCollectionElement

@property (retain, nonatomic, readonly) IKViewElement *relatedContent;
@property (nonatomic, readonly) _Bool isLeftAligned;

@end
