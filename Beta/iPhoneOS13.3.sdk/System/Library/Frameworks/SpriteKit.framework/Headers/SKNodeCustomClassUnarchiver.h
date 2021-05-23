/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKNodeCustomClassUnarchiver : NSObject

{
    NSMutableDictionary *_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (id)_currentAppModuleName;
- (id)_mangledSwiftClassName:(id)arg1 moduleName:(id)arg2;
- (id)_findValidClassName:(id)arg1;

@end
