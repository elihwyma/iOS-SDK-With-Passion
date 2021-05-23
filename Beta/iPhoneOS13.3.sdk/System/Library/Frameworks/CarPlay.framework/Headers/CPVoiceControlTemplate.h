/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <CarPlay/CPTemplate.h>

@class NAFuture, NSArray, NSString;

@interface CPVoiceControlTemplate : CPTemplate

{
    NSArray *_voiceControlStates;
    NSString *_activeStateIdentifier;
}

@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (copy, nonatomic, readonly) NSArray *voiceControlStates;
@property (copy, nonatomic, readonly) NSString *activeStateIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (id)trailingNavigationBarButtons;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (id)initWithVoiceControlStates:(id)arg1;
- (void)activateVoiceControlStateWithIdentifier:(id)arg1;

@end
