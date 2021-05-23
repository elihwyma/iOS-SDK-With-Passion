/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class CPImageSet, NSString, NSUUID, UIImage;

@protocol CPMapButtonDelegate;

@interface CPMapButton : NSObject

{
    _Bool _enabled;
    _Bool _hidden;
    NSUUID *_identifier;
    UIImage *_focusedImage;
    CDUnknownBlockType _handler;
    CPImageSet *_imageSet;
    id <CPMapButtonDelegate> _controlDelegate;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) CPImageSet *imageSet;
@property (weak, nonatomic) id <CPMapButtonDelegate> controlDelegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *focusedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSUUID *identifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (void)handlePrimaryAction;

@end
