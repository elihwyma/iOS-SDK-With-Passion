/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSString;

@interface BYDevice : NSObject

{
    _Bool _hasHomeButton;
    long long _type;
    long long _size;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long size;
@property (nonatomic, readonly) _Bool hasHomeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentDevice;

- (id)init;
- (id)currentDevice;

@end
