/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface SXBlueprintAnalyzerCursor : NSObject

{
    double _highestMaxY;
    NSArray *_path;
    NSMutableArray *_mutablePath;
}

@property (nonatomic, readonly) NSMutableArray *mutablePath;
@property (nonatomic) double highestMaxY;
@property (retain, nonatomic) NSArray *path;

- (id)init;
- (void)addPathComponent:(id)arg1;
- (void)removePathComponent:(id)arg1;

@end
