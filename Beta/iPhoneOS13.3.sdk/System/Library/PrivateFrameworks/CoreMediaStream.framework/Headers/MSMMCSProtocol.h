/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

#import <CoreMediaStream/Swift-Protocol.h>

@class NSString;

@interface MSMMCSProtocol : NSObject <Swift>

{
    NSString *_personID;
    NSString *_MMCSDirPath;
    struct _mmcs_engine *_engine;
    NSString *_engineDirPath;
}

@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) struct _mmcs_engine *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)computeItemIDForAsset:(id)arg1;

- (void)dealloc;
- (void)abort;
- (void)deactivate;
- (void)didFinishUsingAssets:(id)arg1;
- (void)deactivateRemoveAllFiles:(_Bool)arg1;
- (id)initWithPersonID:(id)arg1 path:(id)arg2;
- (int)_getFileDescriptorFromItem:(unsigned long long)arg1;
- (id)_getUTIFromItem:(unsigned long long)arg1;
- (void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3;
- (void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3;
- (void)_requestCompleted;

@end
