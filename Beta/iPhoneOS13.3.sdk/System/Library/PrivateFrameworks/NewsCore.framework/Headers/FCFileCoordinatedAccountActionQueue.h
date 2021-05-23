/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCSyncFileCoordinatedDictionary;

@interface FCFileCoordinatedAccountActionQueue : NSObject

{
    FCSyncFileCoordinatedDictionary *_fileCoordinatedDictionary;
}

@property (retain, nonatomic) FCSyncFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)init;
- (id)initWithFileURL:(id)arg1;
- (_Bool)readLocalDataHint;
- (_Bool)enqueueActionWithType:(long long)arg1;
- (id)peekAtActionTypes;
- (_Bool)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(_Bool)arg2;

@end
