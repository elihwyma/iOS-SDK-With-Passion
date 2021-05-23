/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKBalloonView, NSDictionary;

@interface CKThrowBalloonViewAttributes : NSObject

{
    CKBalloonView *_throwBalloonView;
    NSDictionary *_supplementaryViews;
    struct CGRect _startFrame;
}

@property (retain, nonatomic) CKBalloonView *throwBalloonView;
@property (retain, nonatomic) NSDictionary *supplementaryViews;
@property (nonatomic) struct CGRect startFrame;

@end
