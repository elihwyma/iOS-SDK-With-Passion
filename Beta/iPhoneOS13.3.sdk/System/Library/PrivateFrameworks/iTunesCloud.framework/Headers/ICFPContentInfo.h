/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@interface ICFPContentInfo : NSObject

{
    long long _vodkaType;
    unsigned long long _accountID;
}

@property (nonatomic, readonly) long long vodkaType;
@property (nonatomic, readonly) unsigned long long accountID;
@property (nonatomic, readonly) union FPContentInfo_ fpContentInfo;

+ (id)whaContentInfoWithAccountID:(unsigned long long)arg1;

- (id)_init;

@end
