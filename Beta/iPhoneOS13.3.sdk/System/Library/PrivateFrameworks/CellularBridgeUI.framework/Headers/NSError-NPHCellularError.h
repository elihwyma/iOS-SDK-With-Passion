/*
 Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

#import <Foundation/NSError.h>

@interface NSError (NPHCellularError)

+ (id)_techStandardName;
+ (_Bool)_canControlLTEVoiceOptionsSeparately;
+ (id)NPHCellularErrorWithCode:(long long)arg1 forCarrier:(id)arg2;
+ (id)_titleAndMessageDictForError:(id)arg1 forCarrier:(id)arg2;
+ (id)_techFromBundle;
+ (id)NPHCellularSanitizedError:(id)arg1 forCarrier:(id)arg2;

@end
