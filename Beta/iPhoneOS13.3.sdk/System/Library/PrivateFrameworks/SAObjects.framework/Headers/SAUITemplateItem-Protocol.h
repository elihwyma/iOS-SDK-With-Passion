/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/Swift-Protocol.h>

@class NSArray, SAUITemplateEdgeInsets;

@protocol SAUITemplateItem <Swift>

@property (copy, nonatomic) NSArray *communicationOptions;
@property (retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property (nonatomic) _Bool hasPriorityLayout;
@property (retain, nonatomic) SAUITemplateEdgeInsets *padding;
@property (copy, nonatomic) NSArray *presentationOptions;
@property (nonatomic) _Bool shouldBeOffscreenInPartial;

@end
