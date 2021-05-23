/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSWPLoadableFontInfo : NSObject

{
    NSString *_groupUID;
    NSString *_fontPath;
    NSString *_fontName;
    NSString *_fontFamily;
    struct CGFont *_cgFont;
    unsigned char _attemptedLoad;
    _Bool _obfuscated;
}

@property (copy, nonatomic) NSString *groupUID;
@property (copy, nonatomic) NSString *fontPath;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *fontFamily;
@property (nonatomic) struct CGFont *cgFont;
@property (nonatomic) _Bool obfuscated;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
