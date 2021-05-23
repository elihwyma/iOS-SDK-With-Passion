/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <IMSharedUI/IMChatTranscriptItemLayoutAttributes.h>

@interface IMChatTranscriptItemExtendedLayoutAttributes : IMChatTranscriptItemLayoutAttributes

{
    long long _layoutOrientation;
    double _topMargin;
    struct CGSize _drawableSize;
}

@property (nonatomic) long long layoutOrientation;
@property (nonatomic) struct CGSize drawableSize;
@property (nonatomic) double topMargin;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
