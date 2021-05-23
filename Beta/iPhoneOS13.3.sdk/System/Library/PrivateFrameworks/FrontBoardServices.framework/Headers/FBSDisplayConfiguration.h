/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class CADisplay, FBSDisplayIdentity, FBSDisplayMode, NSSet, NSString;

@interface FBSDisplayConfiguration : NSObject <Swift>

{
    FBSDisplayIdentity *_identity;
    NSString *_hardwareIdentifier;
    NSString *_name;
    NSString *_deviceName;
    unsigned int _noEqual_seed;
    _Bool _noEqual_comparable;
    int _pid;
    long long _tags;
    FBSDisplayMode *_currentMode;
    FBSDisplayMode *_preferredMode;
    NSSet *_otherModes;
    NSSet *_availableModes;
    _Bool _cloningSupported;
    _Bool _overscanned;
    long long _overscanCompensation;
    struct CGSize _overscanAmounts;
    struct CGSize _pixelSize;
    struct CGRect _bounds;
    struct CGPoint _renderingCenter;
    CADisplay *_caDisplay;
    double _latency;
    struct CGSize _safeOverscanRatio;
}

@property (nonatomic, readonly) unsigned int seed;
@property (nonatomic, readonly) long long tags;
@property (copy, nonatomic, readonly) FBSDisplayIdentity *identity;
@property (nonatomic, readonly, getter=isMainDisplay) _Bool mainDisplay;
@property (nonatomic, readonly, getter=isExternal) _Bool external;
@property (nonatomic, readonly, getter=isCarDisplay) _Bool carDisplay;
@property (nonatomic, readonly, getter=isCarInstrumentsDisplay) _Bool carInstrumentsDisplay;
@property (copy, nonatomic, readonly) NSString *hardwareIdentifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *deviceName;
@property (copy, nonatomic, readonly) FBSDisplayMode *currentMode;
@property (copy, nonatomic, readonly) FBSDisplayMode *preferredMode;
@property (copy, nonatomic, readonly) NSSet *availableModes;
@property (nonatomic, readonly, getter=isCloningSupported) _Bool cloningSupported;
@property (nonatomic, readonly, getter=isOverscanned) _Bool overscanned;
@property (nonatomic, readonly) long long overscanCompensation;
@property (nonatomic, readonly) struct CGSize safeOverscanRatio;
@property (nonatomic, readonly) double nativeOrientation;
@property (nonatomic, readonly) struct CGSize pixelSize;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) struct CGPoint renderingCenter;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) long long colorGamut;
@property (nonatomic, readonly) double latency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (double)orientation;
- (id)uniqueID;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)displayID;
- (id)initWithCADisplay:(id)arg1;
- (id)CADisplay;
- (_Bool)expectsSecureRendering;
- (id)_nameForDisplayType;
- (_Bool)isMainRootDisplay;
- (id)_initWithIdentity:(id)arg1 hardwareIdentifier:(id)arg2 name:(id)arg3 deviceName:(id)arg4 seed:(unsigned int)arg5 comparable:(_Bool)arg6 tags:(long long)arg7 currentMode:(id)arg8 preferredMode:(id)arg9 otherModes:(id)arg10 cloningSupported:(_Bool)arg11 overscanned:(_Bool)arg12 overscanCompensation:(long long)arg13 safeOverscanRatio:(struct CGSize)arg14 pixelSize:(struct CGSize)arg15 bounds:(struct CGRect)arg16 renderingCenter:(struct CGPoint)arg17 latency:(double)arg18 validityCheck:(long long)arg19;
- (id)_initWithImmutableDisplay:(id)arg1 originalDisplay:(id)arg2 assertIfInvalid:(_Bool)arg3;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(_Bool)arg2;
- (id)copyWithUniqueIdentifier:(id)arg1;
- (id)copyWithOverrideMode:(id)arg1;
- (long long)_nativeRotation;
- (id)laterConfiguration:(id)arg1;
- (id)copyForSecureRendering;
- (_Bool)isHiddenDisplay;
- (_Bool)wantsConnectionDebouncing;
- (id)caDisplay;
- (struct CGRect)referenceBounds;
- (struct CGPoint)nativeCenter;
- (_Bool)isConnected;
- (_Bool)supportsExtendedColor;

@end
