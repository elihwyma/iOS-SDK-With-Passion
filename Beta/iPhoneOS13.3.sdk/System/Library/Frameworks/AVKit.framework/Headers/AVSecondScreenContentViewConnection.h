/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/AVSecondScreenConnection.h>

@class AVDisplayCriteria;

__attribute__((visibility("hidden")))
@interface AVSecondScreenContentViewConnection : AVSecondScreenConnection

@property (retain, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property (nonatomic, getter=isReadyToConnect) _Bool readyToConnect;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic) _Bool requiresTVOutScreen;

- (id)initWithContentView:(id)arg1;

@end
