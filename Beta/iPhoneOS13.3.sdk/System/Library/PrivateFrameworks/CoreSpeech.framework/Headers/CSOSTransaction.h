/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_transaction;

@interface CSOSTransaction : NSObject

{
    NSObject<OS_os_transaction> *_transaction;
    NSString *_description;
}

- (void)dealloc;
- (id)initWithDescription:(id)arg1;

@end
