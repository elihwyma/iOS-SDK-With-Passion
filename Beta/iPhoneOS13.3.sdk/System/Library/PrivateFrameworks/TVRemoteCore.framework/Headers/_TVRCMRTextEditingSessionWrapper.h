/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString, _TVRCMRTextEditingAttributesWrapper;

@interface _TVRCMRTextEditingSessionWrapper : NSObject

{
    void *_session;
}

@property (copy, nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) _TVRCMRTextEditingAttributesWrapper *attributes;

- (void)dealloc;
- (id)initWithSession:(void *)arg1;

@end
