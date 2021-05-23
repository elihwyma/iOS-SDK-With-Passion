/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface PathPolicyManager : NSObject

{
    NSMutableDictionary *_pathToPathId;
    long long _nextPathId;
}

- (id)init;
- (void)dealloc;
- (id)pathIDForPath:(id)arg1 lookup:(_Bool)arg2;
- (void)removeAllEntries;

@end
