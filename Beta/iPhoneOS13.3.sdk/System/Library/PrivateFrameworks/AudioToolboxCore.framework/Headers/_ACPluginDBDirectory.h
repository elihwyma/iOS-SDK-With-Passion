/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString, _ACPluginDB;

__attribute__((visibility("hidden")))
@interface _ACPluginDBDirectory : NSObject

{
    _ACPluginDB *mDB;
    NSString *mFullPath;
    double mModificationDate;
    int mPriority;
    NSMutableDictionary *mBundlesByName;
    struct __FSEventStream *mFSMonitor;
    double mCurrentModificationDate;
    NSData *mCarbonComponentHash;
    _Bool mComponentsLoadable;
    NSMutableArray *mChangedBundlePaths;
    unsigned long long mNrOfPathsChanged;
    _Bool mShouldRescan;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadAllComponents:(struct AudioComponentVector *)arg1;
- (id)initWithPath:(id)arg1 priority:(int)arg2;
- (_Bool)refreshModificationDate;
- (void)bundlesChanged:(id)arg1 shouldRescan:(_Bool)arg2;
- (void)eventStreamCallback:(id)arg1 flags:(const unsigned int *)arg2;
- (void)monitorDirectory;
- (void)scanDirectory;
- (id)scanBundle:(id)arg1 loadable:(_Bool)arg2;

@end
