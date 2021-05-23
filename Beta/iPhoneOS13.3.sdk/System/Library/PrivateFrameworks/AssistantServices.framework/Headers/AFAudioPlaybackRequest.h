/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSData, NSDictionary, NSURL;

@interface AFAudioPlaybackRequest : NSObject <Swift>

{
    float _volume;
    NSURL *_itemURL;
    NSData *_itemData;
    long long _numberOfLoops;
    double _fadeInDuration;
    double _fadeOutDuration;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic, readonly) NSURL *itemURL;
@property (copy, nonatomic, readonly) NSData *itemData;
@property (nonatomic, readonly) long long numberOfLoops;
@property (nonatomic, readonly) float volume;
@property (nonatomic, readonly) double fadeInDuration;
@property (nonatomic, readonly) double fadeOutDuration;
@property (copy, nonatomic, readonly) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithItemURL:(id)arg1 itemData:(id)arg2 numberOfLoops:(long long)arg3 volume:(float)arg4 fadeInDuration:(double)arg5 fadeOutDuration:(double)arg6 userInfo:(id)arg7;

@end
