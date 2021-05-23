/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class CPAlertAction, CPImageSet, NSArray, NSUUID, UIImage;

@protocol CPNavigationAlertUpdating;

@interface CPNavigationAlert : NSObject

{
    NSArray *_titleVariants;
    NSArray *_subtitleVariants;
    CPImageSet *_imageSet;
    CPAlertAction *_primaryAction;
    CPAlertAction *_secondaryAction;
    double _duration;
    NSUUID *_identifier;
    id <CPNavigationAlertUpdating> _navigationAlertUpdateTarget;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) id <CPNavigationAlertUpdating> navigationAlertUpdateTarget;
@property (copy, nonatomic, readonly) NSArray *titleVariants;
@property (copy, nonatomic, readonly) NSArray *subtitleVariants;
@property (copy, nonatomic, readonly) CPImageSet *imageSet;
@property (copy, nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) CPAlertAction *primaryAction;
@property (nonatomic, readonly) CPAlertAction *secondaryAction;
@property (nonatomic, readonly) double duration;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 imageSet:(id)arg3 primaryAction:(id)arg4 secondaryAction:(id)arg5 duration:(double)arg6;
- (id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 imageSet:(id)arg3 primaryAction:(id)arg4 secondaryAction:(id)arg5 duration:(double)arg6;
- (id)initWithTitleVariants:(id)arg1 subtitleVariants:(id)arg2 image:(id)arg3 primaryAction:(id)arg4 secondaryAction:(id)arg5 duration:(double)arg6;
- (void)updateTitleVariants:(id)arg1 subtitleVariants:(id)arg2;

@end
