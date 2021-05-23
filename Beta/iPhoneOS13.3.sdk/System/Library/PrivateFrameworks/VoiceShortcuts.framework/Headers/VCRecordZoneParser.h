/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@interface VCRecordZoneParser : NSObject

+ (_Bool)shouldIgnoreZoneID:(id)arg1;
+ (_Bool)parseZoneID:(id)arg1 intoIndex:(long long *)arg2;
+ (id)sortedVoiceShortcutZoneIDsFromZoneIDs:(id)arg1;
+ (CDUnknownBlockType)activeRecordZone:(CDUnknownBlockType)arg1;

@end
