/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBPolygon, SBTouchTemplate;

@interface SBTemplateAndMorph : NSObject

{
    SBPolygon *_morphedCandidate;
    SBTouchTemplate *_touchTemplate;
}

@property (nonatomic, readonly) SBPolygon *morphedCandidate;
@property (nonatomic, readonly) SBTouchTemplate *touchTemplate;

- (id)initWithTemplate:(id)arg1 morph:(id)arg2;

@end
