/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface TILinguisticAssetDownloadClientMock : NSObject

{
    long long _result;
    NSError *_error;
}

@property (nonatomic, readonly) long long result;
@property (nonatomic, readonly) NSError *error;

- (id)init;
- (void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithResult:(long long)arg1 error:(id)arg2;

@end
