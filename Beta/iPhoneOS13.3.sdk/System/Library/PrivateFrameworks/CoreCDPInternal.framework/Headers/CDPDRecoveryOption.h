/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CDPDRecoveryOption : NSObject

{
    NSString *_localizedRecoveryOption;
    CDUnknownBlockType _recoveryHandler;
    long long _recoveryOptionIndex;
}

@property (copy, nonatomic) NSString *localizedRecoveryOption;
@property (copy, nonatomic) CDUnknownBlockType recoveryHandler;
@property (nonatomic) long long recoveryOptionIndex;

@end
