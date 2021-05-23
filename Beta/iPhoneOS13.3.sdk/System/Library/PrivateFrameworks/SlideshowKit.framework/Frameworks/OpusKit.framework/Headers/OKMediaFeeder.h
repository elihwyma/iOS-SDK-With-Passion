/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSString, OKPresentation;

@protocol OKMediaFeederDelegate, OS_dispatch_queue;

@interface OKMediaFeeder : NSObject

{
    OKPresentation *_presentation;
    _Bool _wantsLiveUpdates;
    id <OKMediaFeederDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_processingQueue;
    unsigned long long _startIndex;
    _Bool _rotationEnabled;
}

@property (nonatomic) OKPresentation *presentation;
@property (nonatomic) id <OKMediaFeederDelegate> delegate;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic) _Bool rotationEnabled;
@property (nonatomic) _Bool wantsLiveUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isRemote;
+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)operationWithBlock:(CDUnknownBlockType)arg1 cancellationBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)supportLiveUpdates;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allObjects;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)reloadData;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)countOfDictionaryProxy:(id)arg1;
- (id)allKeysForDictionaryProxy:(id)arg1;
- (id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2;
- (id)dictionaryProxy:(id)arg1 objectAtIndexPath:(id)arg2;
- (id)feederSettings;
- (_Bool)canBePersisted;
- (id)reloadMediaObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfMediaObjects;
- (id)mediaObjectsAtIndexes:(id)arg1;
- (id)mediaObjectURLsAtIndexes:(id)arg1;
- (id)indexesForMediaObjects:(id)arg1;
- (void)reloadDataWithProgressBlock:(CDUnknownBlockType)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (id)allMediaURLs;
- (unsigned long long)numberOfMediaItems;
- (unsigned long long)_rotatedIndexFromIndex:(unsigned long long)arg1;
- (id)mediaItemsAtIndexes:(id)arg1;
- (unsigned long long)_numberOfMediaItems;
- (id)_mediaItemsForMediaURLs:(id)arg1;
- (unsigned long long)_indexFromRotatedIndex:(unsigned long long)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (void)performAsynchronousBarrierUsingBlock:(CDUnknownBlockType)arg1;
- (id)mediaURLAtIndex:(unsigned long long)arg1;
- (id)mediaURLsAtIndexes:(id)arg1;
- (unsigned long long)indexForMediaItem:(id)arg1;

@end
