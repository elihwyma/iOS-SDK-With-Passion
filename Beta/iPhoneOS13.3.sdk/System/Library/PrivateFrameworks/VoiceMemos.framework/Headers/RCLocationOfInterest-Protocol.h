/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/Swift-Protocol.h>

@class CLLocation, NSString;

@protocol RCLocationOfInterest <Swift>

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *preferredName;
@property (nonatomic, readonly) CLLocation *location;

@end
