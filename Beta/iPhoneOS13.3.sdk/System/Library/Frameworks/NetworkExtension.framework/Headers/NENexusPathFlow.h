/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NENexusFlow.h>

@class NWPath;

@interface NENexusPathFlow : NENexusFlow

{
    NWPath *_path;
}

@property (retain) NWPath *path;

- (id)initWithPath:(id)arg1;
- (id)endpoint;
- (id)parameters;
- (id)clientIdentifier;

@end
