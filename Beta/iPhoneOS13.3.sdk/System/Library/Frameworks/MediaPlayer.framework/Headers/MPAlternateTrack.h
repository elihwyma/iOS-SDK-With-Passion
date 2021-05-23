/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class AVMediaSelectionOption, NSString;

@interface MPAlternateTrack : NSObject

{
    NSString *_displayName;
    NSString *_canonicalLanguageIdentifier;
    AVMediaSelectionOption *_option;
    _Bool _isMainProgram;
    _Bool _isDVS;
}

@property (retain, nonatomic) NSString *displayName;
@property (nonatomic, readonly) AVMediaSelectionOption *option;
@property (nonatomic, readonly) _Bool isMainProgram;
@property (nonatomic, readonly) _Bool isDVS;
@property (nonatomic, readonly) NSString *canonicalLanguageIdentifier;

+ (id)threeCharCodesForEncodedISO639_2_T:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithOption:(id)arg1;
- (void)_setDisplayNameFromOption:(id)arg1;

@end
