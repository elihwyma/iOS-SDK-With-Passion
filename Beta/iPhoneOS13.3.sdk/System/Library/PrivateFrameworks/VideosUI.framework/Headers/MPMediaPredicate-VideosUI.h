/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <MediaPlayer/MPMediaPredicate.h>

@interface MPMediaPredicate (VideosUI)

+ (id)vui_isLocalPredicate:(_Bool)arg1 comparison:(long long)arg2;
+ (id)vui_showPersistentIDPredicate:(unsigned long long)arg1 comparison:(long long)arg2;
+ (id)vui_seasonNumberPredicate:(unsigned long long)arg1 comparison:(long long)arg2;
+ (id)_vui_isPlayablePredicate:(_Bool)arg1;
+ (id)_vui_isNetworkPlayablePredicate:(_Bool)arg1;
+ (id)vui_mediaEntityTypePredicate:(id)arg1 comparison:(long long)arg2;
+ (id)vui_seasonIdentifierPredicate:(id)arg1 comparison:(long long)arg2;
+ (id)vui_isPlayablePredicate:(_Bool)arg1 comparison:(long long)arg2;
+ (id)vui_restrictionsPredicateWithMediaEntityType:(id)arg1 mediaLibrary:(id)arg2;

@end
