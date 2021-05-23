/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MDLPathAssetResolver : NSObject

{
    NSString *_path;
}

@property (copy, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPath:(id)arg1;
- (id)resolveAssetNamed:(id)arg1;
- (_Bool)canResolveAssetNamed:(id)arg1;

@end
