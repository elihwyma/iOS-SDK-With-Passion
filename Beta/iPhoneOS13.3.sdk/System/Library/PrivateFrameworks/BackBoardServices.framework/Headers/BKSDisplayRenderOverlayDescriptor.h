/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class BKSDisplayProgressIndicatorProperties, CADisplay, NSString;

@interface BKSDisplayRenderOverlayDescriptor : NSObject <Swift>

{
    NSString *_name;
    NSString *_displayUUID;
    CADisplay *_display;
    BKSDisplayProgressIndicatorProperties *_progressIndicatorProperties;
    long long _interfaceOrientation;
    _Bool _lockBacklight;
    _Bool _interstitial;
}

@property (copy, nonatomic) NSString *displayUUID;
@property (nonatomic, getter=isInterstitial, setter=_setInterstitial:) _Bool interstitial;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CADisplay *display;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) _Bool lockBacklight;
@property (retain, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithName:(id)arg1 display:(id)arg2;
+ (id)_classesRequiredToDecode;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithName:(id)arg1 displayUUID:(id)arg2;
- (id)initWithName:(id)arg1 display:(id)arg2;

@end
