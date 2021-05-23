/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class CPImageSet, NSArray, NSString, NSUUID, UIImage;

@protocol CPControlDelegate;

@interface CPGridButton : NSObject

{
    _Bool _enabled;
    NSUUID *_identifier;
    NSArray *_titleVariants;
    CDUnknownBlockType _handler;
    CPImageSet *_imageSet;
    id <CPControlDelegate> _delegate;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) CPImageSet *imageSet;
@property (weak, nonatomic) id <CPControlDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSArray *titleVariants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSUUID *identifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)handlePrimaryAction;
- (id)initWithTitleVariants:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
