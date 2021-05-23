/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMUnitTestLogger;

@interface IMUnitTestBundleLoader : NSObject

{
    IMUnitTestLogger *_logger;
}

@property (readonly) IMUnitTestLogger *logger;

- (id)initWithLogger:(id)arg1;
- (_Bool)loadTestBundle:(id)arg1 bundle:(id *)arg2 error:(id *)arg3;

@end
