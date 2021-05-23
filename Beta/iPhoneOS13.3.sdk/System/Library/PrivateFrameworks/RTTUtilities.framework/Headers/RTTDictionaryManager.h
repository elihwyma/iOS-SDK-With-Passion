/*
 Image: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCondition;

@interface RTTDictionaryManager : NSObject

{
    NSCondition *_condition;
    NSArray *_availableDictionaries;
}

@property (retain, nonatomic) NSArray *availableDictionaries;

+ (id)availableDictionaryAssetsUsingRemoteInfo:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)downloadIfNeeded;
- (void)deleteIfNeeded;
- (id)_ttyDictionaryAsset;
- (_Bool)downloadAsset:(id)arg1 withError:(id *)arg2;
- (_Bool)_isStalledAutoDownloadAsset:(id)arg1;

@end
