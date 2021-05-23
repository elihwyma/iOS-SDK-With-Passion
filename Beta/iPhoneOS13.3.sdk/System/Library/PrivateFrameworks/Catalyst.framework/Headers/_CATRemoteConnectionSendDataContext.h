/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _CATRemoteConnectionSendDataContext : NSObject

{
    NSData *mEncodedData;
    NSData *_data;
    id _userInfo;
    unsigned long long _bytesWritten;
}

@property (copy, nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) id userInfo;
@property (nonatomic, readonly) _Bool hasBytesRemaining;
@property (nonatomic) unsigned long long bytesWritten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long clientBytesWritten;

- (id)initWithData:(id)arg1 userInfo:(id)arg2;
- (id)bufferedDataWithError:(id *)arg1;
- (unsigned long long)headerLength;

@end
