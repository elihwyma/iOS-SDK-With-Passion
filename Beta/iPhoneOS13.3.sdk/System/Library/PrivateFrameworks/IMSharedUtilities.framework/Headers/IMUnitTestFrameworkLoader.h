/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMUnitTestBundleLoader, IMUnitTestLogger;

@interface IMUnitTestFrameworkLoader : NSObject

{
    _Bool _xctestFrameworkLoaded;
    IMUnitTestBundleLoader *_bundleLoader;
    IMUnitTestLogger *_logger;
}

@property _Bool xctestFrameworkLoaded;
@property (nonatomic, readonly) IMUnitTestBundleLoader *bundleLoader;
@property (readonly) IMUnitTestLogger *logger;

- (id)initWithLogger:(id)arg1 bundleLoader:(id)arg2;
- (_Bool)loadTestFrameworks:(id *)arg1;
- (_Bool)loadFrameworkNamesFromTextFile:(id)arg1 outNames:(id *)arg2 error:(id *)arg3;
- (id)frameworkSearchPaths;
- (_Bool)findFrameworkPathsWithFrameworkNames:(id)arg1 searchPaths:(id)arg2 outFrameworkPaths:(id *)arg3 error:(id *)arg4;
- (_Bool)loadFrameworks:(id)arg1 outError:(id *)arg2;
- (_Bool)readXCTestFrameworkDependencies:(id *)arg1 error:(id *)arg2;
- (_Bool)loadXCTestFramework:(id *)arg1;
- (_Bool)frameworkExistsAtPath:(id)arg1;
- (_Bool)loadXCTestFrameworkFromSDK:(id *)arg1;

@end
