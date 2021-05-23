/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CNVCardWritingOptions : NSObject

{
    _Bool _includeNotes;
    _Bool _includePhotos;
    _Bool _includePrivateFields;
    _Bool _includePrivateBundleIdentifiers;
    _Bool _includeUserSettings;
    _Bool _compressPhotos;
    _Bool _prefersUncroppedPhotos;
    _Bool _usePhotoReferencesIfAvailable;
    unsigned long long _maximumEncodingLength;
    unsigned long long _maximumImageEncodingLength;
    struct CGSize _maximumImageSize;
    NSArray *_treatAsUnknownProperties;
    unsigned long long _outputVersion;
    NSArray *_availableEncodings;
}

@property _Bool includePrivateFields;
@property _Bool includePrivateBundleIdentifiers;
@property _Bool includeNotes;
@property _Bool includeUserSettings;
@property _Bool includePhotos;
@property _Bool compressPhotos;
@property _Bool prefersUncroppedPhotos;
@property _Bool usePhotoReferencesIfAvailable;
@property struct CGSize maximumImageSize;
@property unsigned long long maximumEncodingLength;
@property unsigned long long maximumImageEncodingLength;
@property (copy) NSArray *treatAsUnknownProperties;
@property unsigned long long outputVersion;
@property (copy) NSArray *availableEncodings;

+ (id)optionsFromPreferences;

- (id)init;
- (id)description;

@end
