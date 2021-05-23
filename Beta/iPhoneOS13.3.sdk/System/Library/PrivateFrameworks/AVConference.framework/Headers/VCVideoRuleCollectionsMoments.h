/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsMoments : NSObject

{
    _Bool _isHEIFAndHEVCFormatEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (int)getMomentsCapabilities;
- (id)getMomentsVideoCodecs;
- (id)getMomentsImageTypes;

@end
