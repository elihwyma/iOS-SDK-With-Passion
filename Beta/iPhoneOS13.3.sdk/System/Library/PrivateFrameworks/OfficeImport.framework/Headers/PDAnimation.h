/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OITSUNoCopyDictionary, PDRootTimeNode;

__attribute__((visibility("hidden")))
@interface PDAnimation : NSObject

{
    PDRootTimeNode *mRootTimeNode;
    OITSUNoCopyDictionary *mBuildMap;
}

+ (id)entranceSubTypeMap;
+ (id)exitSubTypeMap;

- (id)init;
- (id)description;
- (id)addRootTimeNode;
- (id)rootTimeNode;
- (void)setBuildMap:(id)arg1;
- (id)buildMap;

@end
