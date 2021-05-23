/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class BSMutableSettings, NSString;

@interface FBSDisplayLayoutElement : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_bundleIdentifier;
    struct CGRect _frame;
    struct CGRect _referenceFrame;
    long long _level;
    _Bool _fillsDisplayBounds;
    _Bool _application;
    _Bool _keyboardFocus;
    BSMutableSettings *_otherSettings;
}

@property (nonatomic) struct CGRect frame;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct CGRect referenceFrame;
@property (nonatomic) long long level;
@property (nonatomic) _Bool fillsDisplayBounds;
@property (nonatomic, getter=isUIApplicationElement) _Bool UIApplicationElement;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) _Bool hasKeyboardFocus;
@property (copy, nonatomic, readonly) BSMutableSettings *otherSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (Class)fallbackXPCEncodableClass;
- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (void)setOtherSettings:(id)arg1;

@end
