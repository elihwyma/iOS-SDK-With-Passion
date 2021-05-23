/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RCUIConfiguration : NSObject

{
    NSString *_debugIdentifier;
}

@property (retain, nonatomic) NSString *debugIdentifier;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
