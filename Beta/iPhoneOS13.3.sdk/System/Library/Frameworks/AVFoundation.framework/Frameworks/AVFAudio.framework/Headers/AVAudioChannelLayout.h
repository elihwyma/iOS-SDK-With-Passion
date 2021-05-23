/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@interface AVAudioChannelLayout : NSObject

{
    unsigned int _layoutTag;
    struct AudioChannelLayout *_layout;
    void *_reserved;
}

@property (nonatomic, readonly) unsigned int layoutTag;
@property (nonatomic, readonly) const struct AudioChannelLayout *layout;
@property (nonatomic, readonly) unsigned int channelCount;

+ (_Bool)supportsSecureCoding;
+ (id)layoutWithLayoutTag:(unsigned int)arg1;
+ (id)layoutWithLayout:(const struct AudioChannelLayout *)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)layoutSize;
- (id)initWithLayout:(const struct AudioChannelLayout *)arg1;
- (id)initWithLayoutTag:(unsigned int)arg1;

@end
