/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <CoreLocation/_CLPlaceInference.h>

@class CLLocation, NSString;

@interface _CLPlaceInference (RCLocationOfInterest)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *preferredName;
@property (nonatomic, readonly) CLLocation *location;

+ (void)initialize;

@end
