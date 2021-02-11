/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SiriPresentationOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _hideOtherWindowsDuringAppearance;
    bool  _wakeScreen;
}

@property (nonatomic) bool hideOtherWindowsDuringAppearance;
@property (nonatomic) bool wakeScreen;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hideOtherWindowsDuringAppearance;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setHideOtherWindowsDuringAppearance:(bool)arg1;
- (void)setWakeScreen:(bool)arg1;
- (bool)wakeScreen;

@end