/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/_CUIRawDataRendition.h>

__attribute__((visibility("hidden")))
@interface _CUIRecognitionObjectRendition : _CUIRawDataRendition

{
    int _objectVersion;
    CDStruct_14d5dc5e _transformation;
}

- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (int)objectVersion;
- (CDStruct_14d5dc5e)transformation;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader *)arg1;

@end
