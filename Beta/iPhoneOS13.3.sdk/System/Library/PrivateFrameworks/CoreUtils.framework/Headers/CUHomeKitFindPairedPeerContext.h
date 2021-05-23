/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUPairedPeer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CUHomeKitFindPairedPeerContext : NSObject

{
    _Bool _triedAccessory;
    _Bool _triedHAP;
    CDUnknownBlockType _completion;
    NSString *_identifier;
    unsigned long long _options;
    CUPairedPeer *_pairedPeer;
    unsigned long long _startTicks;
    NSArray *_users;
    unsigned long long _userIndex;
    unsigned long long _userCount;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) CUPairedPeer *pairedPeer;
@property (nonatomic) _Bool triedAccessory;
@property (nonatomic) _Bool triedHAP;
@property (nonatomic) unsigned long long startTicks;
@property (retain, nonatomic) NSArray *users;
@property (nonatomic) unsigned long long userIndex;
@property (nonatomic) unsigned long long userCount;

@end
