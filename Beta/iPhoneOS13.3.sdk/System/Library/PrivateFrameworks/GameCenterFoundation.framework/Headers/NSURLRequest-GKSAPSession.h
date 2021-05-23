/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSURLRequest.h>

@class GKFairPlaySAPSession;

@interface NSURLRequest (GKSAPSession)

@property (retain, nonatomic, getter=_gkSAPSession, setter=_gkSetSAPSession:) GKFairPlaySAPSession *_gkSAPSession;

- (id)_gkDictionaryKey;

@end
