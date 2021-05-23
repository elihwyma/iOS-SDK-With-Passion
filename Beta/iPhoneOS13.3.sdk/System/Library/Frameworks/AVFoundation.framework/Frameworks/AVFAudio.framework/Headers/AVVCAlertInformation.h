/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@interface AVVCAlertInformation : NSObject

{
    int _type;
    long long _mode;
    unsigned long long _alertEndTime;
}

@property (nonatomic) int type;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long alertEndTime;

- (id)initWithAlertType:(int)arg1 mode:(long long)arg2 endTime:(unsigned long long)arg3;

@end
