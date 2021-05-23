/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BSMutableSettings, BSSettings;

@interface BKSButtonHapticsDefinition : NSObject

{
    BSMutableSettings *_settings;
    _Bool _representsHomeButton;
}

@property (nonatomic) _Bool representsHomeButton;
@property (nonatomic, readonly, getter=_BSSettings) BSSettings *BSSettings;
@property (nonatomic, readonly, getter=isLongPressEnabled) long long longPressEnabled;
@property (nonatomic) double minimumMultiplePressTimeInterval;
@property (nonatomic) double maximumMultiplePressTimeInterval;
@property (nonatomic) double minimumLongPressTimeInterval;
@property (nonatomic) double maximumLongPressTimeInterval;
@property (nonatomic) long long maximumPressCount;
@property (nonatomic) long long maximumTapCount;
@property (nonatomic) long long clickHapticAssetType;

+ (_Bool)supportsSecureCoding;
+ (id)definitionForHomeButton;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithBSSettings:(id)arg1;
- (void)updateFromDefinition:(id)arg1 withChangeInspectorBlock:(CDUnknownBlockType)arg2;

@end
