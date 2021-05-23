/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBHIconLabelVisualConfiguration : NSObject

{
    double _fontSize;
    double _baselineOffsetFromImage;
    double _height;
    double _widthDelta;
}

@property (nonatomic) double fontSize;
@property (nonatomic) double baselineOffsetFromImage;
@property (nonatomic) double height;
@property (nonatomic) double widthDelta;
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

@end
