/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSNumber.h>

@class NSString;

@interface NSNumber (ATXScoreLogSerializable)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)atx_writeToFile:(struct __sFILE *)arg1;

@end
