/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, UIImage;

@protocol CPBarButtonDelegate;

@interface CPBarButton : NSObject

{
    _Bool _enabled;
    NSUUID *_identifier;
    unsigned long long _buttonType;
    UIImage *_image;
    NSString *_title;
    CDUnknownBlockType _handler;
    id <CPBarButtonDelegate> _delegate;
}

@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (weak, nonatomic) id <CPBarButtonDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
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
- (id)initWithType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;

@end
