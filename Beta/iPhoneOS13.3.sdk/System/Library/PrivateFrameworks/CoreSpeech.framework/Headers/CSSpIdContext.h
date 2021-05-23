/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, NSDictionary, NSString;

@interface CSSpIdContext : NSObject

{
    NSString *_uniqueUttTag;
    unsigned long long _activeChannel;
    CSAsset *_asset;
    CSAsset *_fallbackAsset;
    NSString *_locale;
    NSDictionary *_vtEventInfo;
    unsigned long long _invocationStyle;
}

@property (nonatomic) unsigned long long invocationStyle;
@property (retain, nonatomic) CSAsset *asset;
@property (retain, nonatomic) NSDictionary *vtEventInfo;
@property (retain, nonatomic) NSString *uniqueUttTag;
@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic, readonly) CSAsset *fallbackAsset;
@property (nonatomic, readonly) NSString *locale;

- (id)description;
- (id)utteranceAudioFilepathForSpIdType:(unsigned long long)arg1;
- (id)utteranceMetadataFilePathForSpIdType:(unsigned long long)arg1;
- (id)initWithSpIdInvocationStyle:(unsigned long long)arg1 asset:(id)arg2 fallbackAsset:(id)arg3 locale:(id)arg4 vtEventInfo:(id)arg5;

@end
