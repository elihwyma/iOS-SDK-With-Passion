/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ASDPluginDSPDatabase : NSObject

{
    NSDictionary *_deviceDatabases;
}

@property (nonatomic, readonly) NSDictionary *deviceDatabases;

- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end
