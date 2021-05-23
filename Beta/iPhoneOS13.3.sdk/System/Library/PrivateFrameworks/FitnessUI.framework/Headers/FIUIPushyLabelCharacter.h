/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, UIView;

@interface FIUIPushyLabelCharacter : NSObject

{
    NSAttributedString *_sourceText;
    UIView *_renderedView;
}

@property (retain) NSAttributedString *sourceText;
@property (retain) UIView *renderedView;

@end
