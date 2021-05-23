/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBSlideState : NSObject

{
    NSMutableDictionary *mBuildOrderMap;
    unsigned int mCurrentGroupId;
}

- (id)init;
- (void)reset;
- (id)buildOrderMap;
- (void)addBuild:(id)arg1 order:(unsigned int)arg2;
- (unsigned int)generateGroupId;

@end
