/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSData;

@interface ICFPStreamContext : NSObject

{
    struct FPStreamOpaque_ *_fpStreamRef;
    unsigned long long _accountID;
    NSData *_playerInfoContextRequestData;
}

@property (nonatomic, readonly) unsigned long long accountID;
@property (copy, nonatomic, readonly) NSData *playerInfoContextRequestData;

- (void)dealloc;
- (id)initWithVersion:(unsigned int)arg1 contextID:(unsigned int)arg2 contentInfo:(id)arg3 returningError:(id *)arg4;
- (_Bool)getPlayerDelegateInfoDataUsingPlayerDelegateInfoResponseData:(id)arg1 returningData:(id *)arg2 error:(id *)arg3;
- (_Bool)getStreamerInfoContextDataUsingPlayerInfoContextData:(id)arg1 returningData:(id *)arg2 error:(id *)arg3;

@end
