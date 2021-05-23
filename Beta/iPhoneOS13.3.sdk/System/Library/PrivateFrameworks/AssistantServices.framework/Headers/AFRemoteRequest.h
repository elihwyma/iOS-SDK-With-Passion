/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFRequestInfo, NSString;

@interface AFRemoteRequest : NSObject

{
    AFRequestInfo *_info;
    NSString *_peerIdentifier;
}

@property (nonatomic, readonly) AFRequestInfo *info;
@property (copy, nonatomic) NSString *peerIdentifier;

- (id)initWithInfo:(id)arg1;
- (void)sendWithCompletion:(CDUnknownBlockType)arg1;

@end
