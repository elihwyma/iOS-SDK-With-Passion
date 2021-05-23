/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSCacheUpdateRequest : NSObject

{
    NSString *_modelID;
    NSString *_classID;
}

- (void)dealloc;
- (id)description;
- (id)modelIdentifier;
- (id)classIdentifier;
- (id)initWithModelIdentifier:(id)arg1 classIdentifier:(id)arg2;
- (id)coalescedRequest:(id)arg1;

@end
