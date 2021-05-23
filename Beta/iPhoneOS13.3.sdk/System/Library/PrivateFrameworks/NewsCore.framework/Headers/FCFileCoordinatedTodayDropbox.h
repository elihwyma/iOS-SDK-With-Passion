/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayDropbox : NSObject

{
    FCFileCoordinatedDictionary *_fileCoordinatedDictionary;
}

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)init;
- (id)initWithFileURL:(id)arg1;
- (void)peekWithAccessor:(CDUnknownBlockType)arg1;
- (void)depositWithAccessor:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
