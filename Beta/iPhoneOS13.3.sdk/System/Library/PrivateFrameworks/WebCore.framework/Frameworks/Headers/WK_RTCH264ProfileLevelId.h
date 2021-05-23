/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCH264ProfileLevelId : NSObject

{
    unsigned long long _profile;
    unsigned long long _level;
    NSString *_hexString;
}

@property (nonatomic) unsigned long long profile;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) NSString *hexString;

- (id)initWithHexString:(id)arg1;
- (id)initWithProfile:(unsigned long long)arg1 level:(unsigned long long)arg2;

@end
