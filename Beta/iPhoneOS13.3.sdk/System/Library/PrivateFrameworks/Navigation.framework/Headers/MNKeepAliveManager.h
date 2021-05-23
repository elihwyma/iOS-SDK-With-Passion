/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSFileManager, NSString;

@interface MNKeepAliveManager : NSObject

{
    unsigned long long _counter;
    NSString *_launchdKeepAliveFile;
    NSFileManager *_fileManager;
}

@property unsigned long long counter;
@property (retain, nonatomic) NSString *launchdKeepAliveFile;
@property (retain, nonatomic) NSFileManager *fileManager;

+ (id)sharedInstance;

- (id)init;
- (void)checkIn;
- (void)checkOut;

@end
