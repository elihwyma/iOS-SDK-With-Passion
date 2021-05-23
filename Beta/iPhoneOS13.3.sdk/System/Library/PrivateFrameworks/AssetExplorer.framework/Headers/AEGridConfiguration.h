/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <Foundation/NSObject.h>

@interface AEGridConfiguration : NSObject

{
    _Bool _oversized;
    unsigned long long _rowCount;
    double _tileHeight;
}

@property (nonatomic) unsigned long long rowCount;
@property (nonatomic) double tileHeight;
@property (nonatomic, getter=isOversized) _Bool oversized;

+ (id)configurationForEnvironment:(id)arg1;

@end
