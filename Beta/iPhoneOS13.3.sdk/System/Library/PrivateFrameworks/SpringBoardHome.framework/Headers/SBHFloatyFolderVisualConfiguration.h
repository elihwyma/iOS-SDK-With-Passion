/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBHFloatyFolderVisualConfiguration : NSObject

{
    double _continuousCornerRadius;
    double _titleFontSizeInPortrait;
    double _titleFontSizeInLandscape;
    struct CGSize _contentBackgroundSize;
    struct CGPoint _contentBackgroundOffsetFromCenterInPortrait;
    struct CGPoint _contentBackgroundOffsetFromCenterInLandscape;
}

@property (nonatomic) struct CGSize contentBackgroundSize;
@property (nonatomic) double continuousCornerRadius;
@property (nonatomic) struct CGPoint contentBackgroundOffsetFromCenterInPortrait;
@property (nonatomic) struct CGPoint contentBackgroundOffsetFromCenterInLandscape;
@property (nonatomic) double titleFontSizeInPortrait;
@property (nonatomic) double titleFontSizeInLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setTitleFontSizeInAllOrientations:(double)arg1;

@end
