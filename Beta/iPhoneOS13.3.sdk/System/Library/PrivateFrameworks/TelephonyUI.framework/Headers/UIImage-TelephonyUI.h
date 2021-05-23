/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIImage.h>

@interface UIImage (TelephonyUI)

+ (long long)scaleForTPScale:(long long)arg1;
+ (id)tpImageForSymbolType:(long long)arg1 configuration:(id)arg2;
+ (id)systemImageNameForSymbolType:(long long)arg1;
+ (_Bool)cappedSizedImagesAreValid;
+ (void)clearCachedCappedSizeImagesIfNeeded;
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 cappedAt:(id)arg3;
+ (id)favoritesGlyphForSymbolType:(long long)arg1;
+ (id)tpImageForSymbolType:(long long)arg1 textStyle:(id)arg2 scale:(long long)arg3 isStaticSize:(_Bool)arg4;
+ (id)recentsGlyphForSymbolType:(long long)arg1;
+ (id)recentsTTYGlyphImage;
+ (id)voicemailGlyphForSymbolType:(long long)arg1;
+ (id)telephonyUIImageNamed:(id)arg1;
+ (id)voicemailPlayGlyphImage;
+ (id)voicemailPauseGlyphImage;
+ (id)tpImageForSymbolType:(long long)arg1 pointSize:(double)arg2;
+ (id)telephonyUIActionButtonGlyphImage;
+ (id)telephonyUIInfoButtonGlyphImage;
+ (id)telephonyUIUnreadIndicatorGlyphImage;
+ (id)favoritesAudioGlyphImage;
+ (id)favoritesMailGlyphImage;
+ (id)favoritesMessageGlyphImage;
+ (id)favoritesTTYDirectGlyphImage;
+ (id)favoritesTTYRelayGlyphImage;
+ (id)favoritesVideoGlyphImage;
+ (id)recentsOutgoingAudioCallGlyphImage;
+ (id)recentsOutgoingVideoCallGlyphImage;
+ (id)recentsTTYDirectGlyphImage;
+ (id)recentsTTYRelayGlyphImage;
+ (id)recentsVerifiedCheckmarkImage;
+ (id)recentsRTTChevronImage;
+ (id)voicemailAudioRouteGlyphImage;
+ (id)voicemailDialRequestGlyphImage;
+ (id)voicemailDeleteGlyphImage;
+ (id)voicemailUndeleteGlyphImage;
+ (id)voicemailPlayGlyphDisabledImage;
+ (id)voicemailPauseGlyphDisabledImage;
+ (id)voicemailReportFeedbackGlyphImage;
+ (id)telephonyUI_iPhoneAudioRouteGlyphImage;
+ (id)telephonyUI_iPadAudioRouteGlyphImage;
+ (id)telephonyUI_iPodAudioRouteGlyphImage;
+ (id)telephonyUI_headphonesAudioRouteGlyphImage;
+ (id)telephonyUI_headphonesAudioControlsGlyphImage;
+ (id)telephonyUI_CarPlayAudioRouteGlyphImage;
+ (id)telephonyUI_muteAudioRouteGlyphImage;
+ (id)telephonyUI_BluetoothAudioRouteGlyphImage;
+ (id)telephonyUI_BluetoothAudioControlsGlyphImage;
+ (id)telephonyUI_speakerAudioRouteGlyphImage;
+ (id)telephonyUI_AudioRouteGlyphForDeviceType:(long long)arg1;
+ (id)telephonyUI_AudioControlsGlyphForDeviceType:(long long)arg1;
+ (id)_tpImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)tpImageNamed:(id)arg1 inBundle:(id)arg2;

- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(double)arg2;
- (id)imageWithShadow:(id)arg1;
- (id)tpFlattenedWithColor:(id)arg1;

@end
