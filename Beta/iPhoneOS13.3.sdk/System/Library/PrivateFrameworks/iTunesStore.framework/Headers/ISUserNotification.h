/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ISUserNotification : NSObject

{
    long long _allowedRetryCount;
    long long _currentRetryCount;
    NSDictionary *_dictionary;
    unsigned long long _optionFlags;
    NSDictionary *_userInfo;
}

@property (readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long optionFlags;
@property long long allowedRetryCount;
@property long long currentRetryCount;
@property (retain) NSDictionary *userInfo;

- (id)init;
- (void)dealloc;
- (struct __CFUserNotification *)copyUserNotification;
- (id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2;

@end
