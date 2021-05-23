/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <Foundation/NSObject.h>

@interface AEGridEnvironment : NSObject

{
    double _headerHeight;
    double _targetBottomMargin;
    double _minimumTileHeight;
    double _scale;
    double _compactExtensionHeight;
}

@property (nonatomic) double headerHeight;
@property (nonatomic) double targetBottomMargin;
@property (nonatomic) double minimumTileHeight;
@property (nonatomic) double scale;
@property (nonatomic) double compactExtensionHeight;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
