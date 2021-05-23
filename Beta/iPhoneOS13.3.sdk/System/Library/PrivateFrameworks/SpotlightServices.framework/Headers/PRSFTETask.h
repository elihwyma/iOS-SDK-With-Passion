/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@interface PRSFTETask : NSObject

{
    CDUnknownBlockType _reply;
}

@property (copy) CDUnknownBlockType reply;

- (id)initWithReply:(CDUnknownBlockType)arg1;
- (_Bool)needsBag;
- (void)triggerQuery:(_Bool)arg1;
- (_Bool)allowLocation;

@end
