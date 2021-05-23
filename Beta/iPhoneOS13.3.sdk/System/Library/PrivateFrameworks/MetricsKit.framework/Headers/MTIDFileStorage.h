/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface MTIDFileStorage : NSObject

{
    _Bool _shouldDisableChangeNotifications;
    NSString *_path;
    NSMutableDictionary *_namespaceFiles;
    NSArray *_entitledNamespaces;
}

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableDictionary *namespaceFiles;
@property (retain, nonatomic) NSArray *entitledNamespaces;
@property (nonatomic) _Bool shouldDisableChangeNotifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPath:(id)arg1;
- (id)updateNamespace:(id)arg1 options:(id)arg2 resetSeed:(_Bool)arg3;
- (id)deleteNamespace:(id)arg1;
- (id)optionsForNamespace:(id)arg1 cachePolicy:(long long)arg2;
- (id)initWithPath:(id)arg1 shouldDisableChangeNotifications:(_Bool)arg2;
- (id)fileForNamespace:(id)arg1 error:(id *)arg2;
- (_Bool)isEntitledNamespace:(id)arg1;
- (id)fileNameForNamespace:(id)arg1;

@end
