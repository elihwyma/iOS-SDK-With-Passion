/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject

{
    FCFileCoordinatedDictionary *_fileCoordinatedDictionary;
}

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)init;
- (id)initWithFileURL:(id)arg1;
- (void)clearUpdates;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)submitUpdate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
