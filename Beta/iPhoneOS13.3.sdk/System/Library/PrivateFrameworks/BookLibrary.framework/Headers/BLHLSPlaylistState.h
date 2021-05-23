/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class BLHLSKey, BLHLSMap, BLHLSStreamInf, NSMutableArray, NSMutableDictionary;

@interface BLHLSPlaylistState : NSObject

{
    NSMutableDictionary *_mutableGroups;
    BLHLSMap *_currentMap;
    double _currentDuration;
    NSMutableArray *_mutableSegments;
    BLHLSStreamInf *_currentStreamInf;
    NSMutableArray *_mutableStreamInfs;
    BLHLSKey *_currentKey;
}

@property (retain, nonatomic) NSMutableDictionary *mutableGroups;
@property (retain, nonatomic) BLHLSMap *currentMap;
@property (nonatomic) double currentDuration;
@property (retain, nonatomic) NSMutableArray *mutableSegments;
@property (retain, nonatomic) BLHLSStreamInf *currentStreamInf;
@property (retain, nonatomic) NSMutableArray *mutableStreamInfs;
@property (retain, nonatomic) BLHLSKey *currentKey;

- (id)init;

@end
