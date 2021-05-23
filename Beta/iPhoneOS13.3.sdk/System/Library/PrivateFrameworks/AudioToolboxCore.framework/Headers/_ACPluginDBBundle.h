/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ACPluginDBBundle : NSObject

{
    NSString *mFullPath;
    double mInfoPlistModDate;
    double mRsrcModDate;
    struct AudioComponentVector mBundleComponentVector;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initWithPath:(id)arg1 infoPlistModDate:(double)arg2 rsrcModDate:(double)arg3;
- (void)loadAllComponents:(struct AudioComponentVector *)arg1;
- (void)scanWithPriority:(int)arg1 loadable:(_Bool)arg2 infoPlistPath:(id)arg3;

@end
