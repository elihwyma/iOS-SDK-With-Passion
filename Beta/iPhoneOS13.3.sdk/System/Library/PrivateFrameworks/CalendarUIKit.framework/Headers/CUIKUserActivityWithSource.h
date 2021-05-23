/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity

{
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (_Bool)_requiresHostAndOwner;
- (_Bool)_supportsConsistentExternalIDAcrossDevices:(long long)arg1;
- (id)initWithSource:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)isMatchForSource:(id)arg1;
- (_Bool)_supportsConsistentExternalIDAcrossDevices;
- (_Bool)_isLocalSource;

@end
