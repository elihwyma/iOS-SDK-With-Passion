/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPCaptionButtonPresentationProperties, LPCaptionPresentationProperties;

@interface LPCaptionRowPresentationProperties : NSObject

{
    LPCaptionPresentationProperties *_leading;
    LPCaptionPresentationProperties *_trailing;
    LPCaptionButtonPresentationProperties *_button;
}

@property (nonatomic, readonly) _Bool hasAnyContent;
@property (retain, nonatomic, readonly) LPCaptionPresentationProperties *leading;
@property (retain, nonatomic, readonly) LPCaptionPresentationProperties *trailing;
@property (retain, nonatomic) LPCaptionButtonPresentationProperties *button;

- (id)init;
- (id)left;
- (id)right;
- (void)applyToAllCaptions:(CDUnknownBlockType)arg1;

@end
